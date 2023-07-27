#include "main.h"
/**
 * swap_int - this is a function that swaps the value of two integer
 *
 * @a: is a pointer to an integer
 * @b: is a pointer to an integer
 *
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int g = *a;
	int h = *b;
	*a = h;
	*b = g;
}
