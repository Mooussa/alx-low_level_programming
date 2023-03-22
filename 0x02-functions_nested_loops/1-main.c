#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
extern void print_alphabet(void)
{
	int ch;
	for (ch = 97; ch <= 122; ch++)
		_putchar(ch);
}
