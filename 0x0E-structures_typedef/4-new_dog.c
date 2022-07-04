#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: 0
 *
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int a, b, i;

	d = (dog_t *) malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	a = b = 0;
	while (name[a])
		;
	while (owner[b])
		;
	d->name = malloc(a * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i <= a; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(b * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i <= b; i++)
		d->owner[i] = owner[i];
	return (d);
}
