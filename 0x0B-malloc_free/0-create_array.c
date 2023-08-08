#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - prints an array with a specified initiator
 * @size: size of array
 * @c: specified character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (size == 0 || array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
