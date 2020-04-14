#include "simple_shell.h"
/**
 *recursion_number - print
 *@n: receive a number
 *@cont: count the lenght of number
 *Return: Amount of digits of the number n
 */
size_t recursion_number(size_t n, size_t cont)
{
	size_t num;
	char c;

	num = n;
	if (num / 10 != 0)
	{
		cont = recursion_number(num / 10, cont = cont + 1);
	}
	c = (num % 10) + '0';
	write(STDERR_FILENO, &c, 1);
	return (cont);
}
/**
 *perror_number - call a recursion function with an iterator
 *@n: number to print
 *Return: lenght of the number
 */
size_t perror_number(size_t n)
{
	size_t i = 1;

	return (recursion_number(n, i));
}
