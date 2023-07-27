#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - t prints the numbers, from 0 to 9,
 * exempting 2 and 4 followed by a new line
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	} _putchar('\n');
}
