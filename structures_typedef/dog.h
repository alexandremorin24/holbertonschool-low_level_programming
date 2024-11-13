#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure that stores information about a dog
 * @name: Name of the dog
 * @age: Age of the dog in years
 * @owner: Name of the dog's owner
 *
 * This structure stores information about a dog, including its name,
 * age, and owner's name.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
