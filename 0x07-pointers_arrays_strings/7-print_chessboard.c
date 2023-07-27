#include "main.h"
/**
 * print_chessboard - prints a chess board
 * @a: is a pointer to the size of rows
 * Return: return void
 */
void print_chessboard(char (*a)[8])
{
	size_t i;
	size_t j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		} putchar('\n');
	}
}
