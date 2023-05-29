#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string
 * return: string
 */
void print_rev(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		putchar('\n');
		return;
	}
	putchar(s[len - 1]);
	print_rev(s + 1);
}
