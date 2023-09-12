#include "dog.h"

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
p->name = (name);
if (!p->name)
{
	free(p);
	return (NULL);
}
p->age = age;
p->owner = (owner);
if (!p->owner)
{
	free(p);
	return (NULL);
}
return (p);
}
