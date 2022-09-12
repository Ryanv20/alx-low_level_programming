#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - checks if positive, zero or negative  
 *
 * Return: zero or negative
 */
int main(void)
{
	int n;
	3rand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("%d is positive\n", n);
	} else if (n == 0)
	{
		print("%d is zero\n", n);
	} else
	{
		printf("%d is negative \n", n);
	}
	return (0);
}
