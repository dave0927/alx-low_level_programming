#include "main.h"

/**
* print_alphabet - prints the alphabet from a - z
*/

void print_alphabet(void)
{
	int _char = 'a';

	for (_char; _char <= 'z'; ++_char)
		_putchar(_char);
	_putchar('\n');
}
