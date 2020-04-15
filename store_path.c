#include "simple_shell.h"
/**
 *store_path - save a string
 *@op: s to save, r to return existend value, c to clear
 *@path: path to save
 *Return: the path stored
 */
char *store_path(char *path, char op)
{
	static char *new_path;


	if (op == 's')
		new_path = path;
	else if (op == 'r')
		return (new_path);
	else if (op == 'c')
		free(new_path);
	return ('\0');
}
