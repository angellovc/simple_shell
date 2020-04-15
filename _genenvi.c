#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include "simple_shell.h"
/**
 *_getenvi - print a enviromental variable.
 *@name: string.
 *Return: string.
 */
char *_getenvi(char *name)
{

	int i = 0, j = 0, lenname = 0, flag = 0, n;
	char *rest;

	while (name[lenname])
		lenname++;
	while (environ[i] != NULL)
	{
		while (name[j])
		{
			if (name[j] == environ[i][j])
				j++;
			else
				break;
		}
		if (j == lenname && environ[i][j] == '=')
		{
			flag++;
			rest = malloc(sizeof(char) * (_strlen(environ[i]) - lenname));
			for (n = lenname + 1; environ[i][n]; n++)
				rest[n - (lenname + 1)] = environ[i][n];
			rest[n - (lenname + 1)] = '\0';
			return (rest);
		}
		j = 0;
		i++;
	}
	if (flag == 0)
		return (name);
	return (NULL);
}
