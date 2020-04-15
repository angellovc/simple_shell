#include "simple_shell.h"
/**
 *getarguments - call split string and _getline.
 *@string: is a string.
 *@size: is a size of file.
 *@status: exit status
 *Return: string.
 */
char **getarguments(char *string, size_t size, int status)
{
	char **token;

	if (getcommand(string, size) == -1)
	{
		if (string != '\0')
			free(string);
		if (isatty(STDIN_FILENO) == 1)
			_putchar('\n');
		exit(status);
	}
	token = split_string(string, " ");
	if (comp_str(token[0], "exit") == 1)
	{
		free_double_single(token, string);
		exit(status);
	}
	return (token);
}
