#include "dog.h"
#include <stdlib.h>

/**
 * _copy - copy of string
 * @src: copy
 * Return: pointer
 */

char *_copy(char *src)
{
	char *a;
	int in;
	int j;

	if (src == NULL)
		return (NULL);

	for (j = 0; src[j] != '\0'; j++)
		;

	a = malloc(sizeof(char) * (j + 1));

	if (a == NULL)
		return (NULL);

	for (in = 0; src[in] != '\0'; in++)
		a[in] = src[in];

	a[in] = '\0';
	return (a);
}

/**
 * new_dog - create a new dog variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to varialb
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *lucky;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	lucky = malloc(sizeof(dog_t));
	if (lucky == NULL)
		return (NULL);

	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(lucky);
		return (NULL);
	}
	(*lucky).name = new_name;
	(*lucky).age = age;
	new_owner = _copy(owner);

	if (new_owner == NULL)
	{
		free((*lucky).name);
		free(lucky);
		return (NULL);
	}
	(*lucky).owner = new_owner;

	return (lucky);
}
