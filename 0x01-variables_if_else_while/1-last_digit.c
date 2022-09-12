#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Checks last digit
 *
 * Return: zero
 */
int main(void)
{
	int n;
	int l;

	3rand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n, l);
	} else if (1 == 0)
	{
		printf("last digit of %d id %d and is 0\n", n, l);
	} else if (1 < 6 && 1 != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, 1);
	}
	return (0);
}
