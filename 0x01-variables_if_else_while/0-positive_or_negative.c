#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: 0 (succesful)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		prinf("%d is positive\n", n);
	else if (n == 0)
		prinf("%d is zero\n", n);
	else
		prinf("%d is negative\n", n);
	return (0);
}
