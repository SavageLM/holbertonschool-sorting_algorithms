#include "sort.h"

/**
 * selection_sort - Sorts by selecting
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, n;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[n])
				n = j;
		}
		if (i != n)
		{
			replace(&array[n], &array[i]);
			print_array(array, size);
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
