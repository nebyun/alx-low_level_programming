#include "dog.h"
#include <string.h>
/**
 * new_dog - a function that create new dog
 * @name: pointer for new dog name
 * @age: dog age
 * @owner: dog owner pointer
 * Return: new dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *temp_name, *temp_owner;
	dog_t *new_pdog;

	temp_name = malloc(sizeof(*name) * (strlen(name) + 1));
	temp_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_pdog = malloc(sizeof(dog_t));
	if (temp_name && temp_owner && new_pdog)
	{
		strcpy(temp_name, name);
		strcpy(temp_owner, owner);
		new_pdog->name = temp_name;
		new_pdog->age = age;
		new_pdog->owner = temp_owner;
	}
	else
	{
		free(temp_name);
		free(temp_owner);
		free(new_pdog);
		return (NULL);
	}
	return (new_pdog);
}
