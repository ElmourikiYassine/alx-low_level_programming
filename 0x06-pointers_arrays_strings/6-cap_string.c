#include "main.h"

/**
 *  cap_string - capitalize the string
 * @s: string
 *
 *  Return: the string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		int is_separator = 0;

		switch ((int) s[i])
		{
			case 32:
				is_separator = 1;
				break;
			case 10:
				is_separator = 1;
				break;
			case 9:
				is_separator = 1;
				s[i] = 32;
				break;
			case 46:
				is_separator = 1;
				break;
			case 44:
				is_separator = 1;
				break;
			case 33:
				is_separator = 1;
				break;
			case 63:
				is_separator = 1;
				break;
			case 34:
				is_separator = 1;
				break;
			case 40:
				is_separator = 1;
				break;
			case 41:
				is_separator = 1;
				break;
			case 123:
				is_separator = 1;
				break;
			case 125:
				is_separator = 1;
				break;
		}
		if (is_separator && s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
	}
	return (s);
}

