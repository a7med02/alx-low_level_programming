
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
    while(av[0][i])
        write(1, &av[0][i++], 1);
    write(1, "\n", 1);
    return (0);
}
