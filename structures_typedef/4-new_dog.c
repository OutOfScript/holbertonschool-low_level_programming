
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int i, len_name, len_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	len_name = 0;
	while (name[len_name] != '\0')
		len_name++;

	len_owner = 0;
	while (owner[len_owner] != '\0')
		len_owner++;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(len_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(len_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		dog->name[i] = name[i];

	for (i = 0; i <= len_owner; i++)
		dog->owner[i] = owner[i];

	dog->age = age;

	return (dog);
}

