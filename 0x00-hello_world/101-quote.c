#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a quote to the output
 *
 * Return: always 1 success
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;
		for (i = 0; quote[i] != '\0'; i++)
	{
		putchar(quote[i]);
	} putchar('\n');
	return (1);
}
