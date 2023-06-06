#include <stdio.h>
/**
 * main - Possible combination of two digitsfrom 00 to 89
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int digit1 = 0;

    while (digit1 <= 8)
    {
        int digit2 = digit1 + 1;

        while (digit2 <= 9)
        {
            putchar('0' + digit1);
            putchar('0' + digit2);

            if (!(digit1 == 8 && digit2 == 9))
            {
                putchar(',');
                putchar(' ');
            }

            digit2++;
        }

        digit1++;
    }
    
    putchar('\n');
    return (0);
}
