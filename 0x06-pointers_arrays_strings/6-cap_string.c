#include "main.h"
/**
 * cap_string - thus function capitalizes  all the function in an string
 * @j: is a pointer to a char array
 * Return: a char value
 */
char *cap_string(char *j)
{
	int i = 0;

	do {
		switch (j[i])
		{
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '(':
			case '\"':
			case ' ':
			case ')':
			case '{':
			case '}':
				if (j[i + 1] >= 'a' && j[i + 1] <= 'z')
				{
					j[i + 1] -= 32;
				}
		} i++;
	}	while (j[i] != '\0');
		return (j);
}
