#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string.
 *
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - Copy a string from source to destination.
 *
 * @dest: The destination string.
 * @string: The source string.
 */
void _strcpy(char *dest, char *string)
{
	int i;

	for (i = 0; i <= _strlen(string); i++)
		dest[i] = string[i];
}

/**
 * new_dog - Create a new dog struct and initialize it.
 *
 * @name: The name to be assigned to the struct field.
 * @age: The age to be assigned to the struct field.
 * @owner: The owner to be assigned to the struct field.
 *
 * Return: A pointer to the newly created dog struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	if (owner == NULL || name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}

	new_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}

