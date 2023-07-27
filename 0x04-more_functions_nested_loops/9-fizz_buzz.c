#include "stdio.h"
#include "stdlib.h"
/**
 * main - prints a number 1 - 100 if multiple of 3 print fizz
 * if multiple of 5 print buzz
 * if multiple if 3 and 5 print fizzbuzz
 *
 * Return: 0 always success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d ", i);
		}
		if (i == 100)
		{
			continue;
		}
		printf(" ");
	} putchar('\n');
	return (0);
}
