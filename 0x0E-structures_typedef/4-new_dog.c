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
if (!name)
	return (NULL);
if (!owner)
	return (NULL);
p->name = strdup(name);
p->age = age;
p->owner = strdup(owner);
return (p);
}
