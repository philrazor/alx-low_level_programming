#include <stdio.h>
#include <stdlib.h>

/**
*main - entry point
*
*Return:Always 0 success
*/

int main(void)
{
	int ch;
		for (ch = 0; ch <= 9; ch++)
		{
			putchar((ch % 10) + '0');
			if (ch == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		} putchar('\n');
		return (0);
}
