#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - prints an array with a specified initiator
 * @size: size of array
 * @c: specified character
 * Return: pointer to the array, or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (Null);

	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		array[i] = c;
	return (array);
}

/**
 * main - prints an arrayof size 10
 * Return: 0
 */

int main(void)
{
	unsigned int size = 10;
	char initialChar = 'X';

	char *array = create_array(size, initialChar);

	if (array != NULL)
	{
		for (unsigned int i = 0; i < size; i++)
		{
			printf("%c", array[i]);
		}
		free(array);

	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
