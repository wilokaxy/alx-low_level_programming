#include <stdio.h>
/**
 *
 * main - prints alphabet letters except q and e
 *
 * Returns 0 (Success)
 */
int main(void)
{
    char alphabet;
    
    for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
    {
        if (alphabet != 'e' && alphabet != 'q')
	{
            putchar(alphabet);
        }
    }

    putchar('\n');
    return (0);
}
