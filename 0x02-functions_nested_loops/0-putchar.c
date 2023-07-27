#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints _putchar and a new line to the screen
 *
 * Return: always 0 success
 */
int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	} _putchar('\n');
	return (0);
}
