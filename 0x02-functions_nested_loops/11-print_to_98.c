#include <stdio.h>

/**
* print_to_98 - prints from a given number `n` to 98
*
* @n: input number
*/

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		count = n;
		while (count > 98)
		{
			printf("%d, ", count);
			count--;
		}
	}
	else
	{
		count = n;
		while (count < 98)
		{
			printf("%d, ", count);
			count++;
		}
	}
}
