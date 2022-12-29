#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: The character
 *
 * Return: On success 1, On error -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
