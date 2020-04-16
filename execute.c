#include "simple_shell.h"
/**
 *execute - call execve
 *@token: is a string.
 *Return: value.
 */
void execute(char **token)
{

	execve(store_path('\0', 'r'), token, environ);
	store_path('\0', 'c');
}
