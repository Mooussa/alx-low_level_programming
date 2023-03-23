#include "main.h"
#include "6-abs.c"
/**
* print_last_digit - Print the last digit
*
* @n: the integer/number
* @ last_digit: The last digit to be returned
* Return: Return the last digit
*/

int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}	
