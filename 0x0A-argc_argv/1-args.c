#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: number of arguments
 * @argv: is an array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("Number of arguments: %d\n", argc - 1);
	return 0;
}
