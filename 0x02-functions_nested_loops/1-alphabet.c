#include "main.h"
/**
 * print_alphabet - Print alphabet
 *
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
	_putchar(10);
}
