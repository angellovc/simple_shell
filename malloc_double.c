#include "variable_manage.h"
/**
 *malloc_double - malloc function for double pointers
 *@size: size of your double
 *Return: new double pointer initialized in null
 */
char **malloc_double(size_t size)
{
	char **new;
	size_t i = 0;

	new = malloc(sizeof(new) * size);
	if (new == '\0')
		return ('\0');
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	return (new);
}
