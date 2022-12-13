#include "main.h"

/**
* times_table - prints the 9 times table
*/

void times_table(void)
{
	int n = 0, m = 1, p;

	for (n; n <= 9; n++)
	{
		_putchar(48);
		for (m; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48);

			_putchar((p % 10) + 48);
		}
		_putchar('\n');
	}
}
