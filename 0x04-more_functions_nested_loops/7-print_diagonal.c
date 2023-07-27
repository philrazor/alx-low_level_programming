#include "main.h"
/**
 * print_diagonal - this prints slashes on the screen
 *
 * @n: this is an integer that would determine the size
 * Return:void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (j = 0; j <= n - 1; j++)
	{
		for (i = 1; i <= j  ; i++)
		{
			_putchar(' ');
		} _putchar('\\');
		_putchar('\n');
	}

}
