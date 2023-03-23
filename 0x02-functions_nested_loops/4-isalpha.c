#include "main.h"
/**
 * _isalpha- check for alphabet
 *
 * @c: Character to be tested
 *
 * Return: 1 or 0 based on condition
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
