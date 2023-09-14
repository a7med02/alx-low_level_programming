#include "variadic_functions.h"

/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator : string to be printed between numbers.
* @n : is the number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list ptr;
va_start(ptr, n);
while (i++ < n)
{
	printf("%d", va_arg(ptr, int));
	if (i != n)
		printf("%s", separator);
}
printf("\n");
va_end(ptr);
}
