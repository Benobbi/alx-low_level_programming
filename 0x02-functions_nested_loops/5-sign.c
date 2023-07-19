#include "main.h"

/**
 * print_sign - determines if a number is greater than,
 * equal to or less than zero
 *
 * @n: the number to be determined
 *
 * Return: 1 for greater than zero. 0 for equal to zero.
 * -1 for number less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
