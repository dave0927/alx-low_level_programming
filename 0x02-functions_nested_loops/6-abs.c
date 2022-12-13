#include "main.c"

/**
* _abs - computes the absolute valuve of an int
*
* @n: input number
*
* Return: the absolute value of `n`
*/

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	return (-n);
}
