#include "simple_shell.h"
/**
 *free_double - free memory
 *@d: is a string
 */
void free_double(char **d)
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
	pid_child_store(0, "restore");
}
