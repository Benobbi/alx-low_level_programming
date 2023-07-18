#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of two digit numbers
 *
 * Return: always 0
 */

int main(void)
{	int a;
	int b;

	while(a <= 98)
	{
	b = a + 1;
	while(b <= 99)
	{
	putchar(a / 10 + '0');
	putchar(a % 10 + '0');
	putchar(' ');
	putchar(b / 10 + '0');
	putchar(b % 10 + '0');
	if (a != 98 || b != 99)
	{
	putchar(',');
	putchar(' ');
	}
	a++;
	}
	b++;
	}
	putchar('\n');

	return (0);
}
