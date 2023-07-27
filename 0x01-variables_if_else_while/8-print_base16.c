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
		for (ch = 48; ch < 58; ch++)
		{
			putchar(ch);
		}
		for (ch = 97; ch < 103; ch++)
		{
			putchar(ch);
		} putchar('\n');
		return (0);

}
