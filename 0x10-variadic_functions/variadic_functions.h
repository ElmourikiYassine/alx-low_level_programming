#ifndef VARIADIC_F_HEADER
#define VARIADIC_F_HEADER
#include <stdarg.h>
#include <stdio.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct Format_for_arg - Structure to store format
 * characters and print functions.
 * @specifier: The format specifier character.
 * @print_func: Pointer to the corresponding print function.
 */
typedef struct Format_for_arg
{
	char specifier;
	void (*print_func)(void *);
} format_arg;
void print_all(const char * const format, ...);
#endif

