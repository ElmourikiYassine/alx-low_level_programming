/**
 * _isdigit - check if letter is a digit
 * @c: is the letter
 * Return: return 1 if true 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
