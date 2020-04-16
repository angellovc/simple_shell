#include "simple_shell.h"
/**
 *store_envp - save a string
 *@op: s to save, r to return existend value, c to clear
 *@envp: envp to save
 *Return: the envp stored
 */
char **store_envp(char **envp, char op)
{
	static char **new_envp;


	if (op == 's')
		new_envp = envp;
	else if (op == 'r')
		return (new_envp);
	return ('\0');
}
