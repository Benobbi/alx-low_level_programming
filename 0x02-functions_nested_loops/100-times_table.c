#include "main.h"

/**
 * print_times_table - print multiplication table for 'n'
 *
 *@n: integer
 *
 * Return: 0 always
 */

void print_times_table(int n)
{
	int a, b, c;

	if (n < 0 || n > 15)
		return;
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			if (c <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else if (c > 9 && c <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else if (c >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 100) + '0');
				_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
			_putchar('\n');
	}
}
