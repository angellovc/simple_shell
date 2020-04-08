#include "simple_shell.h"

size_t counter(char op)
{
	static size_t i = 0;

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
