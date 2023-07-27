#include "main.h"

/**
 * _strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: number of characters to concatenate
 * Return: dest;
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[a + i] = *src;
		src++;
	}
	dest[a + i] = '\0';
	return (dest);
}
