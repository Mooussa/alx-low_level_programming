#include "main.h"
/**
 * _islower - print the lowercase of alphabet
 *
 * @c: is a character to be tested
 *
 * Return: Return 1 or 0 based on condition
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
