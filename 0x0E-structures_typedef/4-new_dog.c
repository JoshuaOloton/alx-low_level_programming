#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog.
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for owner of dog
 * Return: pointer to a new dog of type dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int nlen, olen, i, j;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL || name == NULL || owner == NULL)
		return  (NULL);
	for (nlen = 0; name[nlen]; nlen++)
		;
	for (olen = 0; name[olen]; olen++)
		;
	dog->name = malloc(nlen * sizeof(char) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(olen * sizeof(char) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
	{
		dog->name[i] = name[i];
	}
	for (j = 0; j < olen; j++)
	{
		dog->owner[j] = owner[j];
	}
	dog->name[i] = '\0';
	dog->owner[j] = '\0';
	dog->age = age;

	return (dog);
}
