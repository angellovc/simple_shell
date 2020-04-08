#include "simple_shell.h"

char *char_malloc(size_t size)
{
	char *new;
	size_t i = 0;

	new = malloc(sizeof(char *) * size);
	for(i = 0; i < size; i++)
		new[i] = '\0';
	return(new);
}
