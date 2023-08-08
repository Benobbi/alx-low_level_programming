#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: character printed
 * Return: on success 1
 * on failure, -1, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
