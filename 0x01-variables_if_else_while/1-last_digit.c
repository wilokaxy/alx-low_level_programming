#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main - assign a randon number every time upon execution 
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n, 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n,1);
	}
	else if ( 1== 0)
	{
		printf("Last digit of %i is %i and is 0\n", n,1);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n,1);
	}
	return (0);
}
