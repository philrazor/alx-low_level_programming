#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @c: is an integer
 * Return: always return 0
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (c);
	}
	return (0);
}
