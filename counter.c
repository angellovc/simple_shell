#include "simple_shell.h"
/**
 *counter - counter
 *@op: is signal
 *Return: integer.
 */
size_t counter(char op)
{
	static size_t i;


	if (op == '+')
		i++;
	else if (op == '-')
		i--;
	else if (op == '0')
		i = 0;
	else if (op == '=')
		return (i);
	return (i);
}
