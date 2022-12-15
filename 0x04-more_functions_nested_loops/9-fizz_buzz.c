#include"main.h"
#include <stdio.h>

/**
* main - print numbers 1 - 100 followed by a new line
*	multiples of 3 print Fizz
*	multiples of 5 print Buzz
*	multiples of 3 n 5 print FizzBuzz
* Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; ++num)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
