#include "main.h"

/**
* print_sign - prints the sign of an int
*
* @n: input number
*
* Return: returns 1 and + if the number `n` is greater than 0,
*		0 if th number `n` is zero,
*		-1 and - if `n` iz less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		putchar(45);
		return (-1);
	}
}
