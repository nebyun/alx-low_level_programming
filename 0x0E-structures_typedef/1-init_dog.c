#include "dog.h"
/**
 * init_dog - function for initialization
 * @d: pointer for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Discription: This function is used for initializing
 * dog structure.
 * Return: Nouting
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
