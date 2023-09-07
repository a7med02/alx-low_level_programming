#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*  function that concatenates two strings.
* s, followed by the first n bytes of s2, and null terminated.
*  return : NULL If the function fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;
    unsigned int s = 0;
    char *rt;
    while(s1[i])
        i++;
    rt = malloc(sizeof(char) * (i + n +1));
    if (!rt)
        return (NULL);
    rt[i + n] = '\0';
    i = 0;
    while(s1[i++])
    {
        rt[i-1] = s1[i-1];
    }
    s = i-1;
    i = 0;
    while (s2[i] && i < n)
        rt[s++] = s2[i++];
    return (rt);
}
