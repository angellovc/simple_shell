/**
 *_strcpy - copy an array
 *@dest:receive an array
 *@src: receive an array
 *
 *Return: return a copied array
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
