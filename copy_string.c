#include "simple_shell.h"
/**
 *copy_string - copy a string
 *@string: string
 *Return: new string.
 */

char *copy_string(char *string)
{
	char *new;

	new = malloc(_strlen(string) + 1);
	if (new != NULL)
		_strcpy(new, string);
	return (new);
}
