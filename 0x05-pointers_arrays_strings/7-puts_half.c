#include <stdio.h>
/**
 * puts_half - prints half of the string 
 * @str: input string.
 * Return: no return 
 */
void puts_half(char *str)
{
	int length_of_the_string = 0;
	const char *temp = str;

	while (*temp != '\0')
	{
		length_of_the_string++;
		temp++;
	}

	int n = (length_of_the_string -1)/2;

	for (int i = 0; i < n; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
