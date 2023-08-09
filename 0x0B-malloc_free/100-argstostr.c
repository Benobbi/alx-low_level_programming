#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all aspects of the program
 * @ac: integer
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int r = 0;
	int l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a <ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			a++;
	}
	l += ac;
	str = malloc(sizeof(char) *l + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		str[r] = av[a][b];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);

}
