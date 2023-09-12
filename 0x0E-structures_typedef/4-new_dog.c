#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    dog = malloc(sizeof(dog_t));
    if (!dog)
        return (NULL);
    dog->age = age;
    dog->name = name;
    dog->owner = owner;
    return (dog);
}
