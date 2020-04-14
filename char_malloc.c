#include "simple_shell.h"
#include "simple_shell.h"
/**
 *char_malloc - this is function to asing space to new char
 *@size: is a new size.
 *Return: new char.
 */
char *char_malloc(size_t size)
{
	char *new;
	size_t i = 0;

	new = malloc(sizeof(char *) * size);
	for (i = 0; i < size; i++)
		new[i] = '\0';
	return (new);
}
