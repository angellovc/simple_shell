#include "simple_shell.h"
/**
 *exitfun - print environment variables
 *@token: is a pointer.
 *Return: -1 on failure
*/
int exitfun(char **token)
{
	int stat = 0;
	int j = 1, i = 0, m = 0;

	if (token[1] == '\0')
	{
		free_double(token);
		exit(store_status(0, '='));
	}
	while (token[1][m] != '\0')
	{
		if (token[1][m] < 48 || token[1][m] > 57)
			return (-1);
		m++;
	}
	while (token[1][i] != '\0')
	{
		j = (j * 10);
		i++;
	}
	i = 0, j = (j / 10);
	while ((j) > 0)
	{
		stat += ((token[1][i] + '0') - 96) * j;
		j = j / 10;
		i++;
	}
	free_double(token);
	if (stat > 255)
		exit(stat % 256);
	else
		exit(stat);
}
