#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch, i;
	/*All possible combination a digit*/
	for (ch = 48; ch <= 57; ch++)
	{
		for (i = 48; i <= 57; i++)
		{
			if ((i != ch) && (i > ch))
			{
				putchar(ch);
				putchar(i);
				if (ch != 56 || i != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}

