#include "main.h"

/**
 * _isalpha - detects alphabetic character
 *
 * @c: a letter in ASCII code
 *
 * Return: 1 for letters. 0 if not a letter
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
