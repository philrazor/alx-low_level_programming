#include "main.h"
/**
 * _strpbrk - used to calculate the length of the initial substring of a string
 * @s: is a pointer to a string to be searched
 * @accept:is a set of characters we want to search for
 * Return: return  a char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	size_t i;
	size_t j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	} return NULL;
}
