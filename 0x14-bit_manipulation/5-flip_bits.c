#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to move from one number to another
 * @n:the number to change
 * @m:the second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			count++;
	}

	return (count);
}

