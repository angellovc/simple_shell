#include "simple_shell.h"
/**
 *execute - call execve
 *@token: is a string.
 *@path: string
 *Return: value.
 */
int execute(char **token, char *path)
{

	if (execve(path, token, environ) == -1)
		return (2);
	return (0);
}
