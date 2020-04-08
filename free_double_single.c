#include "simple_shell.h"

void free_double_single(char **d, char *s)
{
	size_t i = 0, size = counter('=');

	if (d != '\0')
	{
		while (i < size)
		{
			free(d[i]);
			i++;
		}
		free(d);
		counter('0');
	}
	if (s != '\0')
		free(s);
	pid_child_store(0, "restore");
}
