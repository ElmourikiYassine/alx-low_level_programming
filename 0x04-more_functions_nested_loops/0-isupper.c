#include "main.h"
/**
 * _isupper  - check if letter is uppercase
 * @c: is the letter
 * Return: return 1 if true 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
