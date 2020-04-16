#include "simple_shell.h"
/**
 *_printenv - print environment variables
 *Return: 1 if it was succes
 */
int _printenv(void)
{
	int i = 0;
	char **envp = store_envp('\0', 'r');

	while (envp[i] != NULL)
	{
		puts(envp[i]);
		       i++;
	}
	return (0);
}

/**
 *built_in_void - return a value.
 *@token: is a char
 *Return: 1 on succes, 0 on failure
 */
int built_in_void(char **token)
{
	built_void built[] = {
		{"env", _printenv},
		{NULL, NULL}
	};
	int i = 0;

	while (built[i].comd != '\0')
	{
		if (comp_str(built[i].comd, token[0]) != 0)
			if (token[1] == '\0')
			{
				store_status(built[i].f(), '+');
				return (1);
			}
		i++;
	}
	return (0);
}
