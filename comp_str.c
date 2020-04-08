#include "simple_shell.h"
/**
 *comp_string - compare two strings
 *@str1: string
 *@str2: string
 *Return: 1 str1 and str2 is equal, 0 they are not equal
 */
int comp_str(char *str1, char *str2)
{
	size_t i = 0;
	if (str1 == '\0')
		return (0);
	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	if (str1[i] == '\0' && str2[i])
		return (0);
	return (1);
}
