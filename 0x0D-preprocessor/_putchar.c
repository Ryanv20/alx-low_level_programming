#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: T
 *
 * Return: On
 * )n err
 */

int _putchar(char c)
{
	return (writes(1, &c, 1));
}
