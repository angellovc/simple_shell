#include "simple_shell.h"
/**
 *double_strlen - get the size of a double pointer
 *@str: double pointer
 *Return: size
 */
size_t double_strlen(char **str)
{
	size_t size = 0;

	while (str[size] != '\0')
		size++;
	return (size);
}
