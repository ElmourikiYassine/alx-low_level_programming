/**
 * _memcpy - fill memory to n from src
 * @dest: destination
 * @src: source
 * @n: the nth
 *
 *  Return: the buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
