#include "main.h"

/**
* print_to_98 - prints from a given number `n` to 98
*
* @n: input number
*/

void print_to_98(int n)
{
	int count = n;

	if (n > 98)
	{
		while (count > 98)
		{
			printf("%d, ", count);
			count--;
		}
	}
	else
	{
		while (count < 98)
		{
			printf("%d, ", count);
			count++;
		}
	}
}
