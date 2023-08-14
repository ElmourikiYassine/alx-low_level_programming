#ifndef HEADER_NAME_H
#define HEADER_NAME_H

/**
 * struct dog - dog struct
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: a simple struct for the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* HEADER_NAME_H */

