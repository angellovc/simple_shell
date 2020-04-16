#include "variable_manage.h"
/**
 *copy_double - copy old string into a new string
 *@old: old string
 *@new: new string
 *Return: new string
 */
char **copy_double(char **old, char **new)
{
	int i = 0;

	while (old[i] != '\0')
	{
		new[i] = old[i];
		i++;
	}
	return (new);
}
