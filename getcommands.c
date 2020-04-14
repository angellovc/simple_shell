#include "simple_shell.h"

int getcommand(char *string, size_t size)
{
	size_t i = 0;

	if (_getline(&string, &size, stdin) == -1)
		return (-1);
	if (string == '\0')
		return (-1);
	while(string[i] != '\0')
	{
		if (string != '\0')
			if (string[i + 1] == '\0')
				string[i] = '\0';
		i++;
	}
	return (i);
}
