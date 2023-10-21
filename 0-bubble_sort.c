#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers in ascending order
 * @array: pointer to the array
 * @size: the size of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int x;
	bool swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				x = array[j];
				array[j] = array[j + 1];
				array[j + 1] = x;
				swapped = true;
				print_array(array, size);
			}
		}

		if (swapped == false)
			break;
	}
}
