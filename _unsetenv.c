#include "variable_manage.h"
#include "simple_shell.h"
/**
 *_unsetenv - unset an environment varialbe
 *@name: variable name
 *Return: 0 success, -1 error
 */
int _unsetenv(const char *name)
{
	size_t i = 0, size_environ;

	size_environ = double_strlen(environ);
	while (environ[i] != NULL)
	{
		if (comp_string(environ[i], name))
		{
			environ = free_env_var(environ, i, size_environ);
			if (environ == '\0')
				return (-1);
			return (0);
		}
		i++;
	}
	return (0);
}
