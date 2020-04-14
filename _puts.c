#include "simple_shell.h"
/**
 *_puts - print string.
 *@str: print a string.
 *Return: size.
 */
size_t _puts(char *str)
{
	int size = 0;

	while (str[size])
	{
		_putchar(str[size]);
		size++;
	}
	_putchar('\n');
	size++;
	return (size);
}
