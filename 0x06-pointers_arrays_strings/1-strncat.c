#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * Return: dest;
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[a + i] = src[i];
		src++;
	}
	dest[a + i] = '\0';
	return (dest);
}
