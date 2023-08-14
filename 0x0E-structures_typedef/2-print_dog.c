#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to a struct dog.
 *
 * This function prints the details of a struct dog,
 * including its name, age, and owner.
 * If any element of the struct is NULL, it prints "(nil)" for that element.
 */

void print_dog(struct dog *d)
{
	/* Check if d is NULL */
	if (d == NULL)
		return; /* Do nothing if d is NULL */

	/* Print the name, or "(nil)" if name is NULL */
	printf("Name: %s\n", d->name ? d->name : "(nil)");

	/* Print the age */
	printf("Age: %.6f\n", d->age);

	/* Print the owner, or "(nil)" if owner is NULL */
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

