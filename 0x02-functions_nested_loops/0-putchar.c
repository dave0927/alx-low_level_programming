#include "main.h"

/**
* main - entry point
*
* Return: return 0
*
*/

int main(void)
{
	char theString[] = "_putchar";
	int ch = 0;

	for (ch; ch < 8; ch++)
	{	
		_putchar(theString[ch]);
	}
	_putchar("\n");

	return (0);
}
