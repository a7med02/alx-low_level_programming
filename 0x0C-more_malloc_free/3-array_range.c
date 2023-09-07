#include "main.h"

/**
*array_range-function that return numbers form min to max.
*@min:mini value.
*@max:the max value.
*Return:array of integerse from started from min to max value.
*/
int *array_range(int min, int max)
{
int i = 0;
int *arr;
if (min > max)
	return (NULL);
arr = malloc(sizeof(int) * (max - min));
if (!arr)
	return (NULL);
while (min <= (max))
	arr[i++] = min++;
return (arr);
}
