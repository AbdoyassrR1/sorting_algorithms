#include "sort.h"

/**
 * bubble_sort - bubble_sort algorithm that sort a arr of int
 * @array: the arr to sort
 * @size: size of that array
 *
 * Return: no thing (void)
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	int swapped = 1;

	if (!array || size < 2)
		return;

	n = size;
	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		n--;
	}
}
