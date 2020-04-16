#include "variable_manage.h"
/**
 *overwrite_after - copy a str into dest after the delimiter character
 *@str: old string
 *@dest: new string
 *@delimiter: delimiter
 *Return: size of new string
 */
size_t overwrite_after(char *delimiter, char *str, char *dest)
{
	int size = 0, i = 0;

	while (dest[size] != *delimiter)
		size++;
	size++;
	while (dest[size] != '\0')
	{
		dest[size] = str[i];
		size++;
		if (str[i] != '\0')
			i++;
	}
	return (size);
}
