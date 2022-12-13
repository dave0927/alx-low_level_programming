#include <stdio.h>

/**
* main - entry point
*
* Return: return 0
*
*/

int main(void)
{
	char _string[] = "_putchar";
	int ch = 0;

	for (ch; ch < 8; ch++)
		_putchar(_string[ch]);
	_putchar("\n");

	return (0);
}
