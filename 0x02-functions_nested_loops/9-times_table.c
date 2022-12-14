#include "main.h"

/**
* times_table - prints the 9 times table
*/

void times_table(void)
{
	int n = 0, m = 1, p;

	while (n <= 9)
	{
		_putchar(48);
		while(m <= 9)
		{
			_putchar(' ');
			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + 48);

			_putchar((p % 10) + 48);
		}
		n++;
		_putchar('\n');
	}		
}
