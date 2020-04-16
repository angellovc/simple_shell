#include "simple_shell.h"
/**
 *execute - call execve
 *@token: is a string.
 *Return: value.
 */
int execute(char **token)
{

	if (execve(store_path('\0', 'r'), token, environ) == -1)
	{
		store_path('\0', 'c');
		store_status(126, '+');
		return (2);
	}
	store_path('\0', 'c');
	return (0);
}
