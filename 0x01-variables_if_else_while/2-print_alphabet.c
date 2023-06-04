#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * return: 0 (success)
 */
int main(void)
{
	int i = 97;

	for (i = 97; i < 123; i++)
	{
		putchar((char)i);
	}
	putchar('\n');
	return (0);
}
