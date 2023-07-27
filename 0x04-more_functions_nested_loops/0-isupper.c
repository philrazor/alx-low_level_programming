#include <stdio.h>
#include "main.h"
/**
 * _isupper -  this is a functiom thah check if a letter is upper case or not
 *
 *@c: is an integer
 *
 * Return: return 1 if uppercase and return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
