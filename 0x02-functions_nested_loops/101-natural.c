#include "main.h"

/**
* main - entry piont
* Description: compute the sum of multiples of 3 and 5 less than 1024
* Return: always 0
*/

int main(void)
{
	int _sum = 0;

	for (int i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			_sum += i;
	}

	printf("%d\n", _sum);
	return (0);
}
