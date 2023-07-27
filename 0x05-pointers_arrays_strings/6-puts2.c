#include "main.h"
/**
 * _strlen - this function returns the length of an array
 *
 * @s: is a pointer to an integer
 *
 * Return: _strlen
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	} return (i);
}
/**
 * puts2 - skips the next data item in an array when print to output
 *
 * @str: is an pointer to an array
 * Return: void
 */
void puts2(char *str)
{
	int len = _strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		} _putchar(str[i]);
	} _putchar('\n');
}
