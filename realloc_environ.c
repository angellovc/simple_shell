#include "variable_manage.h"
/**
 *realloc_environ - function realloc to environ variable
 *@environ: environ variable
 *@new_size: new size of the environ variable
 *Return: pointer to a new environ variable
 */
char **realloc_environ(char **environ, size_t new_size)
{
	char **new_environ;

	new_environ = malloc_double(new_size);
	if (new_environ == '\0')
		return ('\0');
	new_environ = copy_double(environ, new_environ);
	return (new_environ);
}
