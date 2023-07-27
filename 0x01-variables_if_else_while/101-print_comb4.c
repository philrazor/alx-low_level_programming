#include <stdio.h>
#include <stdlib.h>

/**
*main - prints all possible different combinations of three digits.
*
*Return:Always 0 success
*/

int main(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
		for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
					{
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	} putchar('\n');
	return (0);
}
