#include "simple_shell.h"
/**
 *built_in - search into a build in functions
 *@token: string
 *Return: 0 on failure, 1 on success
 */
int built_in(char **token)
{
	int i = 0;

	i = built_in_void(token);
	if (i == 1)
		return (i);
	i = built_in_arg(token);
	if (i == 1)
		return (i);
	return (0);
}
