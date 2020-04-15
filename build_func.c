#include "simple_shell.h"
/**
 *_printenv - print environment variables
 *Return: 1 if it was succes
 */
int _printenv(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		puts(environ[i]);
		       i++;
	}
	return (1);
}

/**
 *built_in - return a value.
 *@token: is a char
 *Return: 1 on succes, 0 on failure
 */
int built_in(char **token)
{
	built_in_void built[] = {
		{"env", _printenv},
		{NULL, NULL}
	};
	int i = 0;

	while (built[i].comd != '\0')
	{
		if (comp_str(token[0], built[i].comd) != 0)
		{
			if (token[1] == '\0')
			{
				built[i].f();
				return (1);
			}
		}
		i++;
	}
	return (0);
}
