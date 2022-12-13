#include "main.h"

/**
* print_times_table - prints the `n` times table
* @n: number of times table
*/

void print_times_table(int n)
{
	int p, m, n;

	if (n <= 15 && n >= 0)
	{
		for (n = 0; n <= n; n++)
		{
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				p = n * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((p / 10) + 48);

				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
