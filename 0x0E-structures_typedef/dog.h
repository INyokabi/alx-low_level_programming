#ifndef _DOG_H
#define _DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - new type struct dog
 * @name: Dog's name
 * @age: Age of dog
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
