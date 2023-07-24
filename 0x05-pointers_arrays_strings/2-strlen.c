
/**
 *  _strlen - the lenght of a string
 * @s: the string
 *
 * Return: the lenght
 */

int _strlen(char *s)
{
	int i = 0;
	char c = *s;

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}

