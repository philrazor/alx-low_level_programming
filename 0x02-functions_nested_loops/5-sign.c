#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @c: is a variable of a number to be inputed
 *
 *	Return: Returns 1 and prints + if n is greater than zero
 *	Returns 0 and prints 0 if n is zero
 *	Returns -1 and prints - if n is less than zero
 */



int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
