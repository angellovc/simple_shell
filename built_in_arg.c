#include "simple_shell.h"
#include "variable_manage.h"
/**
 *built_in_arg - return a value.
 *@token: is a char
 *Return: 1 on succes, 0 on failure
 */
int built_in_arg(char **token)
{
	int i;

	if (comp_str(token[0], "setenv") == 1)
	{
		if (double_strlen(token) != 3)
			return (1);
		i = _setenv(token[1], token[2]);
		if (i == 0)
			return (1);
	}
	if (comp_str(token[0], "unsetenv") == 1)
	{
		if (double_strlen(token) != 2)
			return (1);
		if (token[2] == '\0')
			i = _unsetenv(token[1]);
		if (i == 0)
			return (1);
	}
	return (0);
}
