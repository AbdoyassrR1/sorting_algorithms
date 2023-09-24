#include "sort.h"


/**
 * swap_ - swap to element
 * @a: the first element
 * @b: the second element
 *
 * Return: no thing
*/
void swap_(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

/**
 * bubble_sort - bubble_sort algorithm that sort a arr of int
 * @array: the arr to sort
 * @size: size of that array
 *
 * Return: no thing (void)
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, size2 = size;
	int tmp, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size2; j++)
		{
			if (array[j - 1] > array[j])
			{
				flag = 1;
				swap_(&array[j - 1], &array[j]);
				print_array(array, size);
			}
		}
		if (flag == 0)
			break;
		flag = 0;
		size2--;
	}
}
