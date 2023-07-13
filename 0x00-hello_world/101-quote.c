#include<stdio.h>
/**
 * main - this is the entry
 * Return: 1 if error occurred and 0 if not
 */
int main(void)
{
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, sizeof(char), sizeof(s) / sizeof(s[0]), stderr);
	return (1);
}
