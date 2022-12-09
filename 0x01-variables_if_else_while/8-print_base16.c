#include <stdio.h>
/**
 * main - return the results of the function
 * Description: print the hex numbers
 * Return: an int 0
 */
int main(void)
{
char alphabet;
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
}
for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
