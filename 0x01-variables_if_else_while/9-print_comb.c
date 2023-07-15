#include <stdio.h>
/**
 * main - starting point
 * Description: outputs numbers with commas inside the m
 *
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
		return (0);
}
