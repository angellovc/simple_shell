#include "simple_shell.h"
/**
 *free_path - free memory
 *@arg: is a string
 *@path: is a string.
 */
void free_path(char **arg, char *path)
{
	if (path != arg[0])
		free(path);
}
