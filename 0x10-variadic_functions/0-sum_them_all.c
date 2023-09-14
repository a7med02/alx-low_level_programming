#include "variadic_functions.h"

/**
* sum_them_all -  function that returns the sum of all its parameters.
* @n : the furst and the last arg at the same time.
* Return: the sum of all its parameters.
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int r = 0;
va_list ptr;
va_start(ptr, n);
while (i++ < n)
	r  += va_arg(ptr, int);
va_end(ptr);
return (r);
}
