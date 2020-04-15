#include "simple_shell.h"
/**
 *getarguments - call split string and _getline.
 *@argv: main arguments
 *@i: while iteratio
 *Return: string.
 */
char **getarguments(char **argv, int i)
{
	char *string, **token, *path;

	string = getcommand();
	if (string == '\0')
		return ('\0');
	token = split_string(string, " ");
	if (token == '\0' || token[0] == '\0')
	{
		free(string), free_double(token);
		return ('\0');
	}
	free(string);
	path = find(token, argv, i);
	if (path == '\0')
		return ('\0');
	store_path(path, 's');
	return (token);
}
