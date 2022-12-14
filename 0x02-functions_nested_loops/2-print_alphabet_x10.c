#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	int _printLine = 0, _char = 'a';

	while (_printLine <= 9)
	{
		while (_char <= 'z')
		{
			_putchar(_char);
			_char++;
		}
		_printLine++;
	}
}
