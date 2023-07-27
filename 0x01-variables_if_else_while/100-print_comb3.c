#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all possible different combinations of two digits
*
*Return:Always 0 success
*/

int main(void)
{
	int i = 0;
	int j = 0;
		for (i = 0 ; i < 10; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i == 8 && j == 9)
			{
				continue;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	} putchar('\n');
	return (0);
}
