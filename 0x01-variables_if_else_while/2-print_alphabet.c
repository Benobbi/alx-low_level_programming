#include <stdio.h>

/**
 * main - starting point
 * Description: outputs the letters of the alphabet
 *
 * Return: always 0
 */

int main(void)
{
	char b;
	b = 'a';

	while (b <= 'z')
	{
		putchar (b);
		b++;
	}
		putchar('\n');

		return (0);
}
