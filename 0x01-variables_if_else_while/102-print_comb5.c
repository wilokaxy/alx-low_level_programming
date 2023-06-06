#include <stdio.h>

/**
 * main - program that prints all possible combinations of two two-digit numbers from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
    int numb1 = 0;

    while (numb1 <= 99)
    {
        int numb2 = 0;

        while (numb2 <= 99)
        {
            putchar('0' + (numb1 / 10));
            putchar('0' + (numb1 % 10));
            putchar(' ');
            putchar('0' + (numb2 / 10));
            putchar('0' + (numb2 % 10));

            if (numb1 != 99 || numb2 != 99)
            {
                putchar(',');
                putchar(' ');
            }

            numb2++;
        }

        numb1++;
    }

    putchar('\n');
    return 0;
}
