#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *postitive_or_negative - print whether a number stored in the variable is
 *positive or negative
 *
 * @i:is an argument that will be passed to the funtion 
 * Return:nothing
*/
int postitive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	} else if (i > 0)
	{
		printf("%d is positive\n", i);
	} else
	{
		printf("%d is zero\n", i);
	} return (0);
}
