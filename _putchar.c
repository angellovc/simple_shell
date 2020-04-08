#include "simple_shell.h"
/**
 * _putchar - writes c to stdin
 * @c: character
 *
 * Return: On success 1. 0 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
