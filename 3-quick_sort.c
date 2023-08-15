#include "sort.h"

/**
 * quick_sort - Applies the quick sort algorithm
 * @array: array to sort
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	size_t pivot;

	if (array == NULL || size < 2)
		return;

	print_quick(array, size, 1);

	pivot = lomuto(array, size);

	quick_sort(array, pivot);

	quick_sort(array + pivot, size - pivot);
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

/**
 * lomuto - method of setting partition
 * @array: array to partion
 * @size: size of array
 * Return: i + 1
 */
size_t lomuto(int array[], size_t size)
{
	int pivot;
	size_t j, i = -1;

	pivot = array[size - 1];

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				replace(&array, &array[j]);
				print_quick(array, size, 0);
			}
		}
	}
	if (i + 1 != size - 1)
	{
		replace(&array[i + 1], &array[size - 1]);
		print_quick(array, size, 0);
	}
}

/**
 * print_quick - Function that prints
 * @array: Array to be printed
 * @size: Size of array
 * @start: Should initialize array
 */

void print_sort(int array[], size_t size, int start)
{
	static int *p = (void *)0;
	static size_t s;

	if (!p && start)
	{
		p = array;
		s = size;
	}
	if (!start)
		print_array(p, s);
}
