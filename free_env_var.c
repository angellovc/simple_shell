#include "variable_manage.h"
#include <stdio.h>
/**
 *free_env_var - avoid the element in position and realloc the content
 *@env: old environment variable
 *@position: element that the programs going to avoid
 *@env_size: size of env variable
 *Return: pointer to a new env variable without position element
 */
char **free_env_var(char **env, size_t position, size_t env_size)
{
	char **new_env;
	size_t i = 0, new_size;

	new_size = env_size - 1;
	new_env = malloc_double(sizeof(char *) * new_size);
	if (new_env == '\0')
		return ('\0');
	while (i < new_size)
	{
		if (i == position)
			i++;
		new_env[i] = env[i];
		i++;
	}
	new_env[i] = '\0';
	return (new_env);
}
