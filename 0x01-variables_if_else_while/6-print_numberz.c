#include <stdio.h>
/**
 * main - starting point
 * Description: outputs numbers of base ten starting from zero
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
	putchar('\n');
	return (0);
}
