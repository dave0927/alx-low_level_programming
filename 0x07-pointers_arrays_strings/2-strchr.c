#include "main.h"

/**
 * *_strchr - locates character in string
 * @s: array string
 * @c: the char to look for
 * Return: NULL if char not found else char c
 */

char *_strchr(char *s, char c)

{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
