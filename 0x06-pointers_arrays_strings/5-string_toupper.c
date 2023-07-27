#include "main.h"
/**
 * string_toupper - is a function that converts all lowercase to upper case
 * @j: is a pointer to a char array
 * Return: a char
 */
char *string_toupper(char *j)
{
	int i = 0;

	do {
		if (j[i] >= 'a' && j[i] <= 'z')
		{
			j[i] = j[i] - 32;
		}
		i++;
	} while (j[i] != '\0');
	return (j);
}
