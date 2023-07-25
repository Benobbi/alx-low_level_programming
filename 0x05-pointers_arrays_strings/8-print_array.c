#include "main.h"

/**
 * print_array - print a specified number of elements of an array
 *
 * @a: array to be printed
 *
 * @n: number of elements in the array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
		printf("\n");
}
