#include <stdio.h>

/**
 * main - prints the number of arguements passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argc[])
{
int i = 0;

while (argc--)
{
	printf("%s\n", argc[i]);
	i++;
}

return (0);
}
