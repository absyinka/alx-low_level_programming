#ifndef DOG_H
#define DOG_H

#include<stdio.h>

/**
 * struct dog - A new type of a dog
 * @name: The dog name
 * @age: The dog age
 * @owner: The dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
