#include "variable_manage.h"
#include "simple_shell.h"
#include <stdio.h>
/**
 *write_variable - write a variable value-name into a new variable
 *@name: name of the variable
 *@value: value of the variable
 *@dest: new variable
 *Return: pointer to a new dest
 */
char *write_variable(const char *name, const char *value, char *dest)
{
	size_t i = 0, s_name, s_value, y = 0;

	s_name = _strlen((char *)name);
	s_value = _strlen((char *)value);
	s_name = (s_name + s_value + 2);
	dest = malloc(sizeof(char) * s_name);
	if (dest == '\0')
		return ('\0');
	while (name[i] != '\0')
	{
		dest[i] = name[i];
		i++;
	}
	dest[i] = '=';
	s_value = 0;
	while (dest[i])
	{
		i++;
		dest[i] = value[y];
		if (value[y] != '\0')
			y++;
	}
	dest[i] = '\0';
	return (dest);
}
