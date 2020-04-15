#include "simple_shell.h"
/**
 *getcommand - call getline.
 *Return: input command line
 */

char *getcommand(void)
{
	size_t i = 0, size = 1024;
	char *string;

	string = char_malloc(sizeof(char) * size);
	if (getline(&string, &size, stdin) == -1)
	{
		if (string != '\0')
			free(string);
		if (isatty(STDIN_FILENO) == 1)
			_putchar('\n');
		exit(store_status(0, '='));
	}
	if (string == '\0')
		return ('\0');
	while (string[i] != '\0')
	{
		if (string != '\0')
			if (string[i + 1] == '\0')
				string[i] = '\0';
		i++;
	}
	return (string);
}
