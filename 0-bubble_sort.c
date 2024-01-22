#include "sort.h"

/**
 * bubble_sort - Sort an array of integers in ascending order using Bubble Sort
 * @array: The array to be sorted
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0; /* flag to check if any swaps were made int this pass */

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* swap the elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* print the array after each swap */
				print_array(array, size);

				/* set flag to true */
				swapped = 1;
			}
		}

		/* if no swaps were made, the array is sorted, break */
		if (!swapped)
			break;
	}
}
