#include "sort.h"

/**
 * insert_sort_list - function to sort a doubly linked list
 * of ints using the insertion sort algorithm
 * @list: pointer to the linked list
 * Return: empty
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list;
	listint_t *next;
	int check = 0, len = 0, i, j;

	if (current == NULL || current->next == NULL)
		return;


	while (current)
	{
		next = current->next;
		
		current = next;
	}
}
