#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: ALways 0 (Success)
*/
int main(void)
{
	int ch;
	/*display the integer of hex*/
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
