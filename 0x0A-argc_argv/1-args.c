
#include <stdio.h>

/**
* main - Prints the number of param, followed by a new line.
*@argc : the number of argiments.
*@argv : the array of argement.
* Return: Always o.
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);

return (0);
}
