#include "main.h"
/**
 * _strspn - used to calculate the length of the initial substring of a string
 * @s: is a pointer to a string to be searched
 * @accept:is a set of characters to search for in s
 * Return: return  an int
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t i;
	size_t j;
	unsigned int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				break;
			}
		}
		if (*(accept + j) == '\0')
		{
			break;
		}
	} return (count);
}
