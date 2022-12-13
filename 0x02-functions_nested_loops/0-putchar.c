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
	int _ch = 0;

	for (_ch; _ch < 8; ++_ch)
		_putchar(_string[_ch]);
	_putchar("\n");

	return (0);
}
