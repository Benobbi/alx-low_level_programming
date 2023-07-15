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

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (a = 48; a < 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
