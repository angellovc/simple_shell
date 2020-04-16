#include "simple_shell.h"
/**
 *built_exit - search a exit built in
 *@token: arguments
 *@argv: main arguments
 *@i: iteration number
 *Return: 0 on success, -1 on failure
 */
int built_exit(char **token, char **argv, int i)
{
	if (comp_str(token[0], "exit") == 1)
	{
		if (exitfun(token) == -1)
		{
			errors(argv, i, 2, token);
			free_double(token);
			return (-1);
		}
	}
	return (0);

}
