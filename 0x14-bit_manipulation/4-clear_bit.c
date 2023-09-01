#include "main.h"

/**
 * clear_bit - set the value of a bit at a given index to 0
 * @n: pointer to unsigned integer
 * @index: index of bit set to 0
 * Return: 1 for success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

