#include "main.h"
#include <stdio.h>
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
 * print_array - prints the size of an array
 *
 * @n: is the size of the array to be printed
 * @a: is a pointer to an integer array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
		{
			continue;
		}
		printf(", ");
	} printf("\n");
}
