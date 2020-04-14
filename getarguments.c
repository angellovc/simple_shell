#include "simple_shell.h"
/**
 *getarguments - call split string and _getline.
 *@string: is a string.
 *@size: is a size of file.
 *Return: string.
 */
char **getarguments(char *string, size_t size)
{
	char **token;

	if (getcommand(string, size) == -1)
	{
		if (string != '\0')
			free(string);
		_putchar('\n');
		exit(1);
	}
	token = split_string(string, " ");
	if (comp_str(token[0], "exit") == 1)
	{
		free_double_single(token, string);
		exit(2);
	}
	return (token);
}
