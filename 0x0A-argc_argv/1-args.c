#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguements
 * @argv: Arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
