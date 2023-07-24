#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: string to be checked
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int a;
	int b = 0;

	for (a = 0; s[a] != '\0'; a++)
		b++;
	return (b);
}
