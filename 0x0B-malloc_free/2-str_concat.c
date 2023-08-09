#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concat s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i;
	int b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = b = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[b] != '\0')
		b++;
	c = malloc(sizeof(char) * (i + b + 1));

	if (c == NULL)
		return (NULL);
	i = b = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[b] != '\0')
	{
		c[i] = s2[b];
		i++, b++;
	}
	c[i] = '\0';
	return (c);
}
