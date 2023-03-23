#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 *
 * @n: integer to be tested
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
