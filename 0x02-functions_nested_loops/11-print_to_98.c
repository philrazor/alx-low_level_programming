#include "main.h"
/**
 * print_to_98 -  prints all natural numbers from n to 98, followed by a new line.
 *
 * @n: is an integer 
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = 0; i <= 98; i++)
	{
		_putchar(n + '0');
	} _putchar('\n');
}
