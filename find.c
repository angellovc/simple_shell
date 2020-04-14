#include "simple_shell.h"
#include <sys/types.h>
#include <sys/stat.h>

char *find(char **token, char *string)
{
	struct stat stats;
	char *path;

	if (token[0] == '\0')
		free(string), free(token), exit(3);
	path = get_path(token[0]);
	if (stat(path, &stats) == -1)
		return ('\0');
	return (path);
}
