#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	int _printLine = 0, _char = 'a';

	for (_printLine; _printLine <= 9; _printLine++)
	{
		for (_char; _char <= 'z'; _char++)
		{
			_putchar(_char);
		}
		_putchar('\n');
	}
}
