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

	dog = malloc(sizeof(dog_t *));
	if (dog == NULL || name == NULL || owner == NULL)
		return  (NULL);
	for (i = 0; name[nlen]; nlen++);
	for (j = 0; name[olen]; olen++);
	dog->name = malloc(i * sizeof(char *));
	dog->owner = malloc(j * sizeof(char *));
	for (i = 0; name[i]; i++)
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
