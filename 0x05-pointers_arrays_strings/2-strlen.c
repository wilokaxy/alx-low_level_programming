#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: input string.
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return len;
}
