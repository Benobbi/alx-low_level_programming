#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: the value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b; /*value of the bit to be checked*/

	if (index > 63)
		return (-1);
	b = (n >> index) & 1;
	return (b);
}
