#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* program runs random numbers and evaluates whether the number is less than zero, equal to zero, or greater than zero
  */

/* main - the starting point
 *
 * return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0){
		printf("%d is positive\n",n);
	}
	if (n == 0){
		printf("%d is zero\n",n);
	}
	if (n < 0){
		printf("%d is negative\n",n);
	}

	return (0);
}
