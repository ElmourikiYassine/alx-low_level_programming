#include "variadic_functions.h"

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

/**
 * print_argument - Print argument based on format specifier.
 * @format_specifier: The format specifier character.
 * @ap: va_list containing variable arguments.
 */
void print_argument(char format_specifier, va_list ap)
{
	int int_value;
	float float_value;
	char char_value;
	char *string_value;

	switch (format_specifier)
	{
	case 'c':
		char_value = (char)va_arg(ap, int);
		print_character(&char_value);
		break;
	case 'i':
		int_value = va_arg(ap, int);
		print_integer(&int_value);
		break;
	case 'f':
		float_value = (float)va_arg(ap, double);
		print_float(&float_value);
		break;
	case 's':
		string_value = va_arg(ap, char *);
		print_string(string_value);
		break;
	}
}

/**
 * print_all - Print all arguments based on the format string.
 * @format: The format string containing format specifiers.
 * @...: Variable number of arguments corresponding to format specifiers.
 */
void print_all(const char * const format, ...)
{
	int index = 0;
	format_arg printable[4] = {
		{'c', print_character},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string}
	};

	va_list ap;

	va_start(ap, format);

	while (format[index] != '\0')
	{
		int j = 0;

		while (j < 4)
		{
			if (format[index] == printable[j].specifier)
			{
				if (index != 0)
					printf(", ");
				print_argument(format[index], ap);
				break;
			}
			j++;
		}

		index++;
	}

	printf("\n");
	va_end(ap);
}

