#include "main.h"

/**
* _isalpha - checks if the input `c` is a letter or not
*
* @c: input
*
* Return: returns 1 if c is a letter (both lowercase or uppercase)
*	else it always returns 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
