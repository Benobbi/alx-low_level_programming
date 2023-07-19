#include "main.h"

/**
 * _islower - detects if a letter is lowercase
 *
 * Return: 1 for lowercase letter. 0 for any other character
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else 
	{
		return  (0);
	}
		_putchar('\n');

}
