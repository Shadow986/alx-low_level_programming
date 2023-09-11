#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic information
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: the owner of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* DOG_H */
