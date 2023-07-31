/**
 * _memset - fill memory to n with b
 * @s: the buffer
 * @b: the char to init
 * @n: the nth
 *
 *  Return: the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
