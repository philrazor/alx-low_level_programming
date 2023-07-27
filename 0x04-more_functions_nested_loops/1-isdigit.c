#include <stdio.h>
#include "main.h"
/**
 * _isdigit - checks if an input is a digit or not
 *
 * @c: is an integet that will be inputted to check the function
 *
 * Return: return 1 is it is a digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 52)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

