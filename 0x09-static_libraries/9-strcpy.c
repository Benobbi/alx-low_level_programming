#include "main.h"

/**
 * _strcpy - copies a given string
 *
 * @dest: destination of copied string
 *
 * @src: source of copied string
 *
 * Return: destination of copied string
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
