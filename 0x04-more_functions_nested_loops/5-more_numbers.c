#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: ()
*/

void more_numbers(void)
{
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
