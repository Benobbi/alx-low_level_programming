#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a program name
 * @argc: number of arguments
 * @argv: is an array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
