#include "simple_shell.h"
#include <sys/types.h>
#include <sys/stat.h>

int execute(char **token, char *string)
{
	struct stat stats;
	char *path;
	extern char **environ;

	if (token[0] == '\0')
		free(string), free(token), exit(3);
	path = get_path(token[0]);
	if (stat(path, &stats) == -1)
		return (1);
	if (execve(path, token, environ) == -1)
		return (2);
	return (0);
}
