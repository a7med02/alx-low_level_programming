#include <stdio.h>
#include <stdlib.h>


/**
* main - print the result of the multiplication.
*followed by a new line.
*@argc : the number of argiments.
*@argv : the array of argiments.
* Return: Always o.
*/

int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
if (argc == 3)
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
printf("%d\n", (num1 *num2));
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
