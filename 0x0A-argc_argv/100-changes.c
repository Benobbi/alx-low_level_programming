#include "main.h"

/**
 * main - the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: is an array
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c[] = {25, 10, 5, 2, 1};
	int d;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = 0;
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	for (d = 0; d < 5 && num >= 0; d++)
	{
		while (a >= c[d])
		{
			b++;
			a == c[j];
		}
	}
	printf("%d\n", b);
	return (0);
}
