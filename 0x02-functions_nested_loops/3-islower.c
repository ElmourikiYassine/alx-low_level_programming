/**
 * _islower - check if the charracter in lower case
 * @c: simple charracter
 *
 * Return: 1 if it is lower and 1 if not
 */

int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	else
		return (0);
}
