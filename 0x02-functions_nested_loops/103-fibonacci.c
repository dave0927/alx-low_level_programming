#include <stdio.h>

/**
* main - entry point
* Description: prints the sum of even-valued numbers
* Return: always 0
*/

int main(void)
{
	long int  i = 1, j = 2, _next, _sum = 0;
	int n = 1;

	while (n <= 33)
	{
		if (i < 4000000 && (i % 2) == 0)
		{
			_sum = _sum + i;
		}
		_next = i + j;
		i = j;
		j = _next;
		n++;
	}

	printf("%lu\n", _sum);
	return (0);
}
