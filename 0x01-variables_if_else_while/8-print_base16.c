#include <stdio.h>

/**
 * main - starting point
 * Description: prints numbers in base sixteen
 *
 * Return: always 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 48; a < 57; a++)
	{
		putchar(a);
	}
	for (b = 97; a < 102; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
