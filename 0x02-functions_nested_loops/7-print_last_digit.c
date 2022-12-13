#include "main.h"

/**
* print_last_digit - prints the last digit of a given number
*
* @n: the int
*
* Return: the last digit
*/

int print_last_digit(int n)
{
	int _theLastDigit;

	if (n < 0)
		_theLastDigit = (n % 10) * -1;
	else
		_theLastDigit = n % 10;

	_putchar(_theLastDigit + '0');
	return (_theLastDigit);
}
