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
	int swapped = 0;
	int temp;
	size_t i;
	size_t j;

	if (array == NULL || size < 2)
	{
		return;
	}


	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swapped++;
			}
		}
		if (swapped == 0)
		{
			break;
		}
	}
}
