#include "main.h"
/**
 * print_triangle - prints out a triangle followed by a new line
 *
 * @size: is an integer that determines the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (k = size - i; k > 0; k--)
			{
				_putchar(' ');
			}
			for (k = 0; j < i; k++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			} _putchar('\n');
		}
	}
	_putchar('\n');
}
