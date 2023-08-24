#include <stdio.h>

/**
 * my_function - Executes before the main function.
 */
void __attribute__((constructor)) my_function(void);

void my_function(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}

