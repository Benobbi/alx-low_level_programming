#include <stdio.h>
/**
 * main - prints combination of three digits without repeating
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = 0, b = a + 1, c = a + 2;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
	{
			for (c = a + 2; c <= 9; c++)
	{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');
			{
			if (a == 7 && b == 8 && c == 9)
			continue;

			putchar(',');
			putchar(' ');
			}
	}
	}
	}
	putchar('\n');
	return (0);
}
