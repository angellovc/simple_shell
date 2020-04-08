#include "simple_shell.h"

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
