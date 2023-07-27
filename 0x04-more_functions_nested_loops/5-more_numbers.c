#include <stdio.h>
#include "main.h"
/**
 * more_numbers - this function prints 0 to 14 on the screen 10 times
 *
 * Return:void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
			{
			_putchar(j + '0');
			}
			else
			{
				_putchar('1');
				_putchar(j % 10 + '0');
			}
		} putchar('\n');
	}
}
