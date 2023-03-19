#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	/*posssible digits*/
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		putchar(44);
		putchar(32);
	}
	putchar(10);
	return (0);
}
