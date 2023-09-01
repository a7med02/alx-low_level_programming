#include <stdio.h>

/**
* main - Prints all the parameter followed by a new line.
*@argc : the number of argiments.
* Return: Always o.
*/

int main(int argc, char *argv[])
{
    int i;

    i = 0;
    while (i < argc)
    {
        printf("%s\n", argv[i++]);
    }

    return (0);
}
