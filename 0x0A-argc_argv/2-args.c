#include <stdio.h>

/**
 * main - print arguments passed to it
 * @argc: length of the arguments passed
 * @argv: array of arguments passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
