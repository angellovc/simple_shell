#include "simple_shell.h"
#include <sys/types.h>
#include <sys/stat.h>
/**
 *find - check the existence of a file
 *@token: arguments
 *Return: file with his path
 */
char *find(char **token)
{
	struct stat stats;
	char *path;

	path = get_path(token[0]);
	if (stat(path, &stats) == -1)
		return ('\0');
	return (path);
}
