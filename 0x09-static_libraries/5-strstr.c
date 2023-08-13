#include "main.h"
/**
 * _strstr - Locates a substring within a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the first occurrence of @needle in @haystack,
 *         or 0 if @needle is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (0);
}

