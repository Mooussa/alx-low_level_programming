#include "main.h"
/**
* swap_int - Flip two numbers
* @a: First number
* @b: Second number
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
