/**
 * _isalpha - check if the charracter is an alphabet or not
 * @c: simple charracter
 *
 * Return: 1 if it is lowercase or uppercase and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
