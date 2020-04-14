#include "simple_shell.h"

/**
 *_puts1 - print string.
 *@str: print a string.
 *Return: size.
 */
size_t _puts1(char *str)
{
	int size = 0;

	while (str[size])
	{
		_putchar(str[size]);
		size++;
	}
	size++;
	return (size);
}

/**
 *promp -  tae information from enviroment variables.
 */
void promp(void)
{
	char *user, *pwd;

	user = _getenvi("USER");
	pwd = _getenvi("PWD");

	_puts1(user);
	_puts1("@Cisfun:");
	_puts1(pwd);
	_puts1("$");

	printf("%s@Cisfun:%s$ ", user, pwd);
	free(user);
	free(pwd);

}
