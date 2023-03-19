#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int ch;
	/*Looping through in reverse order*/
	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}
