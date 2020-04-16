#include "simple_shell.h"

/**
 *exitfun - print environment variables
 *@token: is a pointer.
 *return: 0
*/
int exitfun(char **token)
{
	int stat = 0;
	int j = 1, i = 0, m = 0;

	if (token[1] == '\0')
	{
		free_double(token);
		exit(0);
	}
	while (token[1][m] != '\0')
	{
		if (token[1][m] < 48 || token[1][m] > 57 )
			return (0);
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

/**
 *built_arg - return a value.
 *@token: is a char
 *Return: 1 on succes, 0 on failure
 */
int built_arg(char **token)
{
	built_in_arg built[] = {
		{"exit", exitfun},
		{NULL, NULL}
	};
	int i = 0;

	while (built[i].comd != '\0')
	{
		if (comp_str(token[0], built[i].comd) != 0)
		{
			store_status(built[i].f(token), '+');
			return (0);
		}
		i++;
	}
	return (0);
}
