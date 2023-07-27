#include <stdio.h>
#include "main.h"
/**
 * print_line - This program prints a line on the screen
 *
 * @n: is an integer that determines the size of the line
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	} _putchar('\n');
}
