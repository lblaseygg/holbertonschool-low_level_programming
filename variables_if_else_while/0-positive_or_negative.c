#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* Prints: if N is positive, negative or zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%dis positive\n");
	}
	else if (n == 0)
	{
		printf("%dis zero\n");
	}
	else
	{
		printf("%dis negative\n");
	}

	return (0);
}
