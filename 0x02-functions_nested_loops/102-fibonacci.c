#include <stdio.h>
/**
 * main - prints the fibonacci series
 *
 * Return: always 0
 */
int main(void)
{
	long int a;
	long int b;
	long int c;
	int i;

	a = 1, b = 2;

	printf("%ld, %ld, ", a, b);
	for (i = 0; i <= 47; i++)
	{
		c = a + b;
		printf("%ld", c);
		a = b;
		b = c;

		if (i == 47)
			break;
		printf(", ");
	}
	printf("\n");
	return (0);
}

