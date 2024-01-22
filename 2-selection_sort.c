#include "sort.h"

/**
 * selection_sort - function to sort integers in an array
 * of ints using the insertion sort algorithm
 * @array: pointer to the linked list
 * @size: size of the array
 * Return: empty
*/

void selection_sort(int *array, size_t size)
{
	size_t current, count;
	int temp = 0, check = 0;

	if (array == NULL)
		return;

	for (current = 0; current < size; current++)
	{
		check = 1;
		for (count = current; count < size; count++)
		{
			if (count != 0 && array[count] == array[current - 1])
			{
				temp = array[current];
				array[current] = array[count];
				array[count] = temp;
				check = 0;
				continue;
			}
			else if (array[count] < array[current])
			{
				temp = array[current];
				array[current] = array[count];
				array[count] = temp;
				check = 0;
			}

		}
		if (check == 1)
			break;
		print_array(array, size);
	}
}
