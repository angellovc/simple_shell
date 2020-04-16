#include "variable_manage.h"
#include "simple_shell.h"
/**
 *comp_string - compare two strings
 *@str1: string
 *@str2: string
 *Return: 1 str1 and str2 is equal, 0 they are not equal
 */
int comp_string(char *str1, const char *str2)
{
	size_t i = 0, size = 0;

	size = _strlen((char *)str2);
	while (i < size)
	{
		if (str1[i] != str2[i])
		{
			return (0);
		}
		i++;
	}
		return (1);
}
