#include "simple_shell.h"

char **getarguments(char *string, size_t size)
{
	char **token;

	if (getcommand(string, size) == -1)
	{
		if (string != '\0')
			free(string);
		putchar('\n');
		exit(1);
	}
	token = split_string(string, " ");
	if (comp_str(token[0], "exit") == 1)
	{
		free_double_single(token, string);
		exit(2);
	}
	return(token);
}
