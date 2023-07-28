#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array with specified number of elements
 * @n: number of elements in the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	for (i = 0, i < n--; i++;)
	{
		b = a[i];
		a[i] = a[n];
		a[n] = b;
	}
}
