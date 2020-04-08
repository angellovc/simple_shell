#include "simple_shell.h"
#include <sys/types.h>
#include <sys/stat.h>

void execute(char **token, char *string)
{
	struct stat stats;

	if (token[0] == '\0')
	{
		free(string);
		free(token);
		exit(3);
	}
	if (stat(token[0], &stats) == 0)
	{
		if(execve(token[0], token, NULL) == -1)
			perror("Command not found");
	}
	else
	{
		perror("Command not found");
		free_double_single(token, '\0');
	}
}
