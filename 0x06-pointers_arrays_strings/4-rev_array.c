#include "main.h"
/**
 * reverse_array - is a functon that reverses an array
 * @a: is a pointer to an integer
 * @n: is the size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int rev;

	for (i = 0, j = n - 1 ; i < j ; i++, j--)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
	}
}
