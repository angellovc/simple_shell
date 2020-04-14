#include "simple_shell.h"
#include <stdio.h>
/**
 *split_string - take a string and split in parts.
 *@string: is a string.
 *@delim: delimiter for split.
 *Return: new string.
 */
char **split_string(char *string, char *delim)
{
	char **token, *s, *tok;
	size_t old_len;

	s = copy_string(string);
	token = malloc(sizeof(token));
	tok = strtok(s, delim);
	while (tok != '\0')
	{
		old_len = sizeof((*token)) * counter('=');
		counter('+');
		token = _realloc(token, old_len, sizeof((*token)) * counter('='));
		token[counter('=') - 1] = copy_string(tok);
		tok = strtok('\0', delim);
	}
	token = realloc(token, sizeof((*token)) * (counter('=') + 1));
	token[counter('=')] = '\0';
	free(s);
	return (token);
}
