#include "main.h"

/**
* _islower - check if a char is lowercase or not
*
* @c: input of function
*
* Return: return 0 if the input 'c' is lowercase else it always prints 0.
*	(success)
*/

int _islower(int c)
{
	if (c >= 97 && <= 122)
	{
		return (1);
	}
	return (0);
}
