#include <stdio.h>
#include "fuction_pointers.h"
/**
 * int_index - creates for an integer
 * @array: arra to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of thre first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
