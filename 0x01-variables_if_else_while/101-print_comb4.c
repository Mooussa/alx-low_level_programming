#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;
	/*Iteration indices*/
	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if ((j != i) && (j > i))
			{
				for (k = 48; k <= 57; k++)
				{
					if ((((k != j) && (j != i)) && (k != i)) && ((k > j) && (j > i)))
					{
						/*Start displaying*/
						putchar(i);
						putchar(j);
						putchar(k);
						if ((k != 57) || (j != 56) || (i != 55))
						{
						putchar(44);
						putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
