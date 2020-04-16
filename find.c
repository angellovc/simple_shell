#include "simple_shell.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 *find - check the existence of a file
 *@token: arguments
 *@argv: program arguments
 *@i: iteration number
 *Return: file with his path
 */
char *find(char **token, char **argv, int i)
{
	struct stat stats;
	char *path;

	if (built_in(token) == 1)
	{
		free_double(token);
		return ('\0');
	}
	if (built_arg(token) == 1)
	{
		free_double(token);
		return ('\0');
	}
	path = get_path(token[0]);
	if (path == '\0')
		return ('\0');
	if (stat(path, &stats) == -1)
	{
		errors(argv, i, 1, token);
		free_double(token);
		store_status(127, '+');
		return ('\0');
	}
	return (path);
}
