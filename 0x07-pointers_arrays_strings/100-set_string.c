#include <stdio.h>
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: pointer to pointer
 * @to: a pointer
 *
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = *(s + sizeof(*to));
}
