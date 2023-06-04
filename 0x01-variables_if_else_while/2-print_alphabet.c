#include <stdio.h>
/*
 * main - prints alphabet
 *
 * return: 0 (success)
 */
int main(void)
{
	int i=97;
	char alphabet;
	for (i = 97; i < 123; i++)
	{
	 alphabet =(char) i;
	printf("%c", alphabet);
	}
	printf("\n");
	return 0;
}
