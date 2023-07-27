#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all the letters in lowercase except q and e
 *
 * Return:Always 0 success
 */
int main(void)
{
	int ch;
		for (ch = 'a'; ch <= 'z'; ch++)
			if (ch == 'q' || ch == 'e')
				continue;
			else
				putchar(ch);
		putchar('\n');
		return (0);
}
