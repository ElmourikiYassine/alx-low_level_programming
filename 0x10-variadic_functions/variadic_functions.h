#ifndef VARIADIC_F_HEADER
#define VARIADIC_F_HEADER
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct Format_for_arg - Structure to store format
 * characters and print functions.
 * @x: The format specifier character.
 * @print_arg: Pointer to the corresponding print function.
 */

typedef struct Format_for_arg
{
	char x;
	void (*print_arg)(void *);
} format_arg;

/**
 * print_character - Print character argument.
 * @arg: Pointer to the character argument.
 */
void print_character(void *arg)
{
	printf("%c", *(char *)arg);
}

/**
 * print_integer - Print integer argument.
 * @arg: Pointer to the integer argument.
 */
void print_integer(void *arg)
{
	printf("%d", *(int *)arg);
}

/**
 * print_float - Print float argument.
 * @arg: Pointer to the float argument.
 */
void print_float(void *arg)
{
	printf("%f", *(float *)arg);
}
/**
 * print_string - Print string argument.
 * @arg: Pointer to the string argument.
 */
void print_string(void *arg)
{
	char *str = (char *)arg;

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
void print_all(const char * const format, ...);
#endif

