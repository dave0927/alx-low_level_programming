#include "main.h"

/**
 *swap_int - swaps the values of two integers.
 * @a: first int
 * @b: second int
 * Return: not.
 */

void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;
}
