#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digit = n % 10;

	printf("Last digit of %d is ", n);
	if (digit > 5)
	{
		printf("%d and is greater than 5\n", digit);
	}
	if (digit < 6)
	{
		if (digit == 0)
		{
			printf("0 and is 0\n");
		}
		else
		{
			printf("%d and is less than 6 and not 0\n", digit);
		}
	}
	return (0);
}
