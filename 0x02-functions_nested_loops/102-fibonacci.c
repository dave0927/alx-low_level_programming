#include <stdio.h>

/**
* main - Entry point
* Description: prints the first 50 Fabonacci numbers
* Return: always 0
*/

int main(void)
{
	int _n = 0;
	long int num1 = 0, num2 = 1, _sum;

	while (_n < 50)
	{
		_sum = num1 + num2;
		printf("%lu", _sum);

		num1 = num2;
		num2 = _sum;

		if (_n == 49)
			printf("\n");
		else
			printf(", ");
	 _n++;
	}
	return (0);
}
