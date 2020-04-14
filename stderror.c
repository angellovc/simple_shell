#include "simple_shell.h"
/**
 *sterr - write a error.
 *@str: is a string.
 *Return: integer.
 */
int sterr(char *str)
{
	int i = 0;

	if (str == '\0')
		return (0);
	while (str[i])
	{
		write(STDERR_FILENO, &str[i], 1);
		i++;
	}
	return (i);
}
