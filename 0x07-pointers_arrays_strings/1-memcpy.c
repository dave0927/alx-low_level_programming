#include "main.h"

/**
 * *_memcpy - copies n bytes from memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number of bytes
 * Return: copied memory with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int x = 0;
	int y = 0;

	while (n > 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		n--;
	}
	return (dest);
}
