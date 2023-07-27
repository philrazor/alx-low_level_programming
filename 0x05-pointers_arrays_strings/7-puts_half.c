#include "main.h"
/**
 * _strlen - this function returns the length of an array
 *
 * @s: is a pointer to an integer
 *
 * Return: _strlen
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	} return (i);
}
/**
 * puts_half - prints the second half of a string
 *
 * @str: is a pointer to an array of integers
 * Return:void
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int halflen = len / 2;
	int i;
	int n = len / 2;

		if (len % 2 != 0)
	{
			for (i = n + 1; i < len; i++)
			{
				if (str[i] == '\0')
					continue;
				_putchar(str[i]);
			} _putchar('\n');
	}
	else
	{
		for (i = halflen ; i < len; i++)
		{
			if (str[i] == '\0')
				continue;
			_putchar(str[i]);
		} _putchar('\n');
	}
}
