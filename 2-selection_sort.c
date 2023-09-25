#include "sort.h"

/**
 * selection_sort - selection_sort algorithm
 * @array: the arrary to be sorted.
 * @size: the size of array.
 *
 * Return: nothing (void)
*/

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min_idx;

	if (!array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		if (i != min_idx)
		{
			swap(&array[min_idx], &array[i]);
			print_array(array, size);
		}
	}
}

/**
 * swap - Function that swaps two values
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
