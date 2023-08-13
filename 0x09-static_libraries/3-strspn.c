#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s != '\0' && *s != ' ')
	{
		if (_strchr(accept, *s) == 0)
		{
			return (count);
		}

		count++;
		s++;
	}

	return (count);
}
