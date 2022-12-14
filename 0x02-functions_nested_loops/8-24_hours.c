#include "main.h"

/**
* jack_bauer - prints every minutes of the day
*/

void jack_bauer(void)
{
	int hour = 0, minute;

	while (hour < 24)
	{
		minute = 0;
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour & 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

			minute++;
		}
		hour++;
	}
}
