#include "main.h"
/**
 * leet - is a function that encodes a string to 1337
 *
 * @s: is a pointer to an integer
 * Return: a char
 */
char *leet(char *s)
{
	int i = 0;
	int j;

	char leet[5] = {'a', 'e', 'o', 't', 'l'};
	int num[5] = {4, 3, 0, 7, 1};

	while (s[i] != '\0')
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j] || s[i] == leet[j] - 32)
			{
				s[i] = num[j] + '0';
			}
		} i++;
	} return (s);
}
