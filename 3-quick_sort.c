#include "sort.h"

/**
* partition - Lomutu partition scheme for quicksort algorithm
* @a: Arr to be sorted.
* @l: lowest index.
* @h: highest index.
* Return: index of pivot
*/

int partition(int *a, int l, int h)
{
	int p, i, j, t;
	static int size, k;

	if (k == 0)
		size = h + 1, k++;
	p = a[h];
	i = l;
	for (j = l; j < h; j++)
	{
		if (a[j] <= p)
		{
			if (i != j)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
				print_array(a, size);
			}
			i++;
		}
	}
	if (i != h)
	{
		t = a[i];
		a[i] = a[h];
		a[h] = t;
		print_array(a, size);
	}

	return (i);
}

/**
* qs - Quicksort recurssive function.
* @a: array to sort
* @l: lowest index
* @h: highest index
*/

void qs(int *a, int l, int h)
{
	int p;

	if (l < h)
	{
		p = partition(a, l, h);
		qs(a, l, p - 1);
		qs(a, p + 1, h);
	}
}


/**
* quick_sort - sorts array using quicksort algorithm
* @array: Array to be sorted.
* @size: Size of array
*/

void quick_sort(int *array, size_t size)
{
	if (array == NULL)
		return;
	qs(array, 0, size - 1);
}
