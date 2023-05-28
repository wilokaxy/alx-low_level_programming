#include <stdio.h>
/*
 * Main - prints the lowercase alphabet in reverse
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet;

	for (i = 122; i >= 97; i--)
	{
		alphabet = (char) i;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
