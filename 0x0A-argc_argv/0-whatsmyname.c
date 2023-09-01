
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
    int i;
    (void)ac;

    i = 0;
    printf("%s\n", av[0]);
    return (0);
}
