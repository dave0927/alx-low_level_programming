#include "main.h"
#include <string.h>

/**
 * *_memset - fills a memory block with a constant byte
 * @s: starting address of memory
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int z;

	for (z = 0; z < n; z++)
		s[z] = b;

	return (s);
}
