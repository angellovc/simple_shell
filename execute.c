#include "simple_shell.h"

int execute(char **token, char *path)
{
	extern char **environ;

	if (execve(path, token, environ) == -1)
		return (2);
	return (0);
}
