#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter
 * Return: 1 for uppercase, 0 for otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
