#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
* new_dog - entry point
* @name: string from main, name of pet
* @age: number from main, age of pet
* @owner: string from main, owner of pet
* Return: p
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;

p = malloc(sizeof(dog_t));
if (p == NULL)
	return (NULL);
if (!age || age < 0)
{
	free(p);
	return (NULL);
}
if (!name)
{
	free(p);
	return (NULL);
}
if (!owner)
{
	free(p);
	free(name);
	return (NULL);
}
p->name = strdup(name);
if (!p->name)
{
	free(p);
	free(name);
	free(owner);
	return (NULL);
}
p->age = age;
p->owner = strdup(owner);
if (!p->owner)
{
	free(p->name);
	free(p);
	free(owner);
	free(name);
	return (NULL);
}
return (p);
}
