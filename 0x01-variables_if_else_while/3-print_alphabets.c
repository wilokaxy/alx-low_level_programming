#include <stdio.h>
/**
 * main - Prints alphabet in two cases
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
    char lowercase;
    char uppercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        putchar(lowercase);
    }

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        putchar(uppercase);
    }

    putchar('\n');
    return 0;
}
