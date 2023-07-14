#include <stdio.h>
/**
 * main - starting point
 *
 * return: always 0
 */
int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	printf("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(S)\n", sizeof(long long int));
	printf("soze of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
