#include "main.h"

/**
* jack_bauer - prints every minutes of the day
*/

void jack_bauer(void)
{
	int hour = 0, minute;

	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);

			minute++;
			_putchar('\n');
		}
		hour++;
	}
}
