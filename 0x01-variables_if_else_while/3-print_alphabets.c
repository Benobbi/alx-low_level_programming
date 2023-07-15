#include <stdio.h>

/**
 * main - starting point
 * Description: prints the alphabet in lower and uppercase
 *
 * Return: always 0
 */
int main (void)
{
	char b;
	char c;

	b = 'a';
	c = 'A';

	while
		(b <= 'z')
		{
			putchar(b);
			b++;
		}
	while 
		(c <= 'Z')
		{
			putchar (c);
			c++;
		}
	putchar('\n');
	return (0);
}

