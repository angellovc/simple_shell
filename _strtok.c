#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include "simple_shell.h"
/**
 *_getenv - get a variable
 *@name: name of variable
 *Return: string
 */
char *_getenv(const char *name)
{
	int i = 0, j = 0, lenname = 0, flag = 0;

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
			return (environ[i]);
		}
		j = 0;
		i++;
	}
	if (flag == 0)
		_puts("variable no found\n");
	return (NULL);
}
/**
 *len_pat - size of path
 *@string: string
 *@delimit: delimit
 *Return: size of path
 */
int len_pat(char *string, char delimit)
{
	int i, j = 0;

	for (i = 0; string[i]; i++)
	{
		if (string[i] == delimit)
			j++;
	}
	return (j);
}
/**
 *malloc_strtok - malloc adecuate for strtok
 *@string: string
 *@delimit: delimit
 *@funct: funct
 *Return: memory for strtok
 */
char **malloc_strtok(char *string, char delimit, char *funct)
{
	unsigned int i, j, k = 0, split = 5, len = 0, lenstring, lenfunct;
	char **rstring;
	int *tem, n;
/* i and split inizializate in 5 for eliminate word "PATH="*/
	j = len_pat(string, delimit) + 1;
	lenfunct = _strlen(funct) + 1;
	tem = (int *)(malloc(sizeof(int) * (j + 1)));
	lenstring = _strlen(string);
	for (i = 5; string[i] != '\0'; i++)
	{
		if (string[i] == delimit)
		{
			len = i - split;
			tem[k] = len + lenfunct;
			split = i + 1;
			k++;
		}
		if (i == lenstring - 1)
		{
			len = i + 1 - split;
			tem[k] = len + lenfunct;
			split = i + 1;
		}
	}
	rstring = (char **)(malloc(sizeof(char *) * j));
	for (i = 0; i < j; i++)
	{
		rstring[i] = NULL;
		rstring[i] = (char *)(malloc(sizeof(char) * (tem[i] + 1)));
		for (n = 0; n < (tem[i] + 1); n++)
			rstring[i][n] =  '\0';
	}
	free(tem);
	return (rstring);
}
/**
 *fill_strtok - fill strtok
 *@string: string
 *@delimit: delimit
 *@funct: funct
 *Return: double pointer filled
 */
char **fill_strtok(char *string, char delimit, char *funct)
{

	unsigned int split = 5, k = 0, i, m, lenstring;
	char **rstring;

	lenstring = _strlen(string);
	rstring = malloc_strtok(string, delimit, funct);
	for (i = 5; string[i] != '\0'; i++)
	{
		if (string[i] != delimit)
			rstring[k][i - split] = string[i];
		else
		{
			for (m = 0; funct[m] != '\0'; m++)
			{
				rstring[k][i - split] = '/';
				rstring[k][i + 1 - split + m] = funct[m];
			}
			rstring[k][i - split + m + 1] = '\0';
			split = i + 1;
			k++;
		}
		if (i == lenstring - 1)
		{
			for (m = 0; funct[m] != '\0'; m++)
			{
				rstring[k][i + 1 - split] = '/';
				rstring[k][i + 2 - split + m] = funct[m];
			}
			rstring[k][i - split + m + 2] = '\0';
		}
	}
	return (rstring);
}
/**
 *get_path - find the path of a function
 *@funct: string
 *Return: path with his function
 */
char *get_path(char *funct)
{
	int i, y = 0;
	char **r;
	char *ret;
	struct stat stats;

	while (funct[y] != '\0')
	{
		if (funct[y] == '/')
			return (copy_string(funct));
		y++;
	}

	r = fill_strtok(_getenv("PATH"), ':', funct);
	for (i = 0; i < len_pat(_getenv("PATH"), ':') + 1; i++)
	{
		if (stat(r[i], &stats) == 0)
		{
			ret = malloc(_strlen(r[i]) + 1);
			if (ret != NULL)
				_strcpy(ret, r[i]);
			for (i = 0; i < len_pat(_getenv("PATH"), ':') + 1; i++)
				free(r[i]);
			free(r);
			return (ret);
		}
	}
	for (i = 0; i < len_pat(_getenv("PATH"), ':') + 1; i++)
		free(r[i]);
	free(r);
	return (funct);
}
