#include "sort.h"
/**
 * selection_sort - sorts the array by selection algorithm
 * @array: the pointer to the array
 * @size: the size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int k;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			k = array[min_idx];
			array[min_idx] = array[i];
			array[i] = k;

			print_array(array, size);
		}
	}
}
