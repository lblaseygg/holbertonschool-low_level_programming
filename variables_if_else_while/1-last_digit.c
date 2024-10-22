#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Prints out if the last digit is greater than 5, or is 0 or is less than 6
 *
 * Return: Always
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10; /*this gets the last digit of n*/
	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
