#include "main.h"

/**
* function that allocates memory using malloc.
* return : a pointer to allocated memory.
*/
void *malloc_checked(unsigned int b)
{
    void *c;
    c = malloc(b);
    if (!c)
        exit (98);
    return (c);
}
