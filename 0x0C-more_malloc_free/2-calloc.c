#include "main.h"

/**
*  
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *block;
    unsigned int i = 0;

    if(nmemb == 0 || size == 0)
        return (NULL);
    block = malloc(nmemb * size);
    if(!block)
        return (NULL);
    while(i < (nmemb * size))
        block[i++] = 0;
    return (block);
}
