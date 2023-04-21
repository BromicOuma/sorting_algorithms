#include "sort.h"

/**
 * bubble_sort - sort arrays of integer in ascending order
 *
 * @array: array of integers
 * @size: size of array
 *
 * Return - nothing
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)

		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}

	}




}

