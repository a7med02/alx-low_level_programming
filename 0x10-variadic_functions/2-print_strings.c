#include "variadic_functions.h"

/**
* print_strings -  function that prints strings, followed by a new line.
* @separator :  the string to be printed between the strings.
* @n : the number of strings passed to the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ptr;
va_start(ptr, n);
while (i++ < n)
{
	printf("%s", va_arg(ptr, char *));
	if (i != n)
		printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
