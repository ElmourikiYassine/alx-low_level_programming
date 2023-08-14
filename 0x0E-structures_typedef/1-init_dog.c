#include "dog.h"
/**
 * init_dog - check the code
 *
 * @d: the pointer to the struct.
 * @name: the name to be assigned to the struct field.
 * @age: the age to be assigned to the struct field.
 * @owner: the owner to be assigned to the struct field.
 *
 * Return: nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
