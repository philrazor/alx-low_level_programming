#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10 - prints all alphabet in lowercase 10 times
 *
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	int ch;
	int i;
		for (i = 0; i < 10; i++)
		{
			for (ch = 'a'; ch <= 'z'; ch++)
			{
				_putchar(ch);
			} _putchar('\n');
		}
}
