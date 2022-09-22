#include "main.h"

/**
 * string_ toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: address tp the string
 */

char *string_ toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && tstr[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
