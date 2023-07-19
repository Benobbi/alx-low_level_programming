#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @a: integer
 *
 * Return: last digit
 */

int print_last_digit(int a)
{
	int b;

	b = n % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		putchar(l + 48);
		return (b);
	}

}
