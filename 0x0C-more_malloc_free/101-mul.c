#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_length - Calculate the length of a string
 *
 * @str: The input string
 *
 * Return: The length of the string
 */
int str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * mem_fill - Fill a memory block with a specific byte
 *
 * @block: Pointer to the memory block
 * @byte: The byte to fill the block with
 * @size: The number of bytes to fill
 *
 * Return: Pointer to the filled memory block
 */
char *mem_fill(char *block, char byte, unsigned int size)
{
	unsigned int i = 0;

	while (i < size)
	{
		block[i] = byte;
		i++;
	}
	return (block);
}

/**
 * custom_calloc - Allocate and initialize memory for an array
 *
 * @num_elements: Number of elements in the array
 * @element_size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *custom_calloc(unsigned int num_elements, unsigned int element_size)
{
	char *ptr;

	if (num_elements == 0 || element_size == 0)
		return (NULL);

	ptr = malloc(num_elements * element_size);
	if (ptr == NULL)
		return (NULL);

	mem_fill(ptr, 0, num_elements * element_size);

	return (ptr);
}

/**
 * perform_multiplication - Multiply two positive numbers
 *
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: Nothing
 */
void perform_multiplication(char *num1, char *num2)
{
	int i, len1, len2, total_len, first_digit,
	    second_digit, result = 0, temp_result;
	char *result_ptr;
	void *temp_ptr;

	len1 = str_length(num1);
	len2 = str_length(num2);
	temp_result = len2;
	total_len = len1 + len2;
	result_ptr = custom_calloc(sizeof(int), total_len);

	temp_ptr = result_ptr;

	for (len1--; len1 >= 0; len1--)
	{
		first_digit = num1[len1] - '0';
		result = 0;
		len2 = temp_result;
		for (len2--; len2 >= 0; len2--)
		{
			second_digit = num2[len2] - '0';
			result += result_ptr[len2 + len1 + 1] + (first_digit * second_digit);
			result_ptr[len1 + len2 + 1] = result % 10;
			result /= 10;
		}
		if (result)
			result_ptr[len1 + len2 + 1] = result % 10;
	}

	while (*result_ptr == 0)
	{
		result_ptr++;
		total_len--;
	}

	for (i = 0; i < total_len; i++)
		printf("%i", result_ptr[i]);
	printf("\n");
	free(temp_ptr);
}

/**
 * contains_only_numbers - Check if a string contains only numeric characters
 *
 * @str: The input string
 *
 * Return: 1 if true, 0 if false
 */
int contains_only_numbers(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - Entry point of the program
 *
 * Description: A program that multiplies
 * two positive numbers provided as command line arguments
 *
 * @argc: The number of command line arguments
 * @argv: Array of command line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *number1 = argv[1];
	char *number2 = argv[2];

	if (argc != 3 || contains_only_numbers(number1)
		|| contains_only_numbers(number2))
	{
		printf("Error\n");
		exit(98);
	}

	if (*number1 == '0' || *number2 == '0')
	{
		putchar('0');
		putchar('\n');
	}
	else
		perform_multiplication(number1, number2);

	return (0);
}

