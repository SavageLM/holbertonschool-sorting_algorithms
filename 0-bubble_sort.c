#include "sort.h"

/**
 * bubble_sort -  algorithm for the bubble sort
 * @array: array to sort
 * @size: size of array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				replace(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}

/**
 * replace - swaps two integers
 * @a: first integer
 * @b: second integer
 */

void replace(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
