#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - calls a function to act on array elements
 * @array: Name of the array in which the function acts on.
 * @size: size of th epassed array to function
 * @action: the function thats acts on the aray elements
 * Author: sammykingx
 * Return: no return cause we've declared VOID
 */
void  array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
