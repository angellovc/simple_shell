/**
 *_strlen - mesure the lenght of an array
 *@s: receive an array
 *
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
