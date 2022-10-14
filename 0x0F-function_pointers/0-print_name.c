#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer function
 * author: Ryanl
 * Return: No return cause we've 
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* if any is NULL */
		return;

	f(name);
}
