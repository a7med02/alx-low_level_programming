#include "dog.h"

/**
 * ft_strlen - copy a string.
 * @s: a string to be counted.
 * Return: string length.
*/
int	ft_strlen(char *s)
{
	int len;

	len = 0;
	while (*s)
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * ft_strcpy - copy a string.
 * @s: a string to be copied.
 * Return: new string.
*/
char *ft_strcpy(char *s)
{
	char *d = malloc(sizeof(char ) * (ft_strlen(s) + 1));
	int i = 0;

	while (*s)
	{
		d[i] = *s;
		i++;
		s++;
	}
	d[i] = '\0';
	return (d);
}

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
	return (NULL);
}
p->name = ft_strcpy(name);
if (!p->name)
{
	free(p);
	return (NULL);
}
p->age = age;
p->owner = ft_strcpy(owner);
if (!p->owner)
{
	free(p);
	return (NULL);
}
return (p);
}
