#include "simple_shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 *_getline - take values from command line.
 *@line: is string.
 *@n: is a size of string.
 *@stream: is origin of data.
 *Return: -1 fail.
 */

ssize_t _getline(char **line, size_t *n, FILE *stream)
{
	ssize_t readed = 0;
	size_t i = 0;

	while (readed != -1)
	{
		(*line)[i] = fgetc(stream);
		*n = strlen(&**line);
		i++;
		if (i > *n)
		{
			(*line) = _realloc((*line), *n, i);
			if ((*line) == '\0')
				return (-1);
			(*line)[i + 2] = '\0';
		}
		(*line)[i] = '\0';
		if (line[0][i - 1] == '\n')
		{
			return ((ssize_t)i);
		}
		if (line[0][i - 1] == EOF)
		{
			return (-1);
		}
		if (line[0][i - 1] == 4)
			return (-1);
	}
	return (-1);
}
