#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: Pointer to the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *previous;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		previous = current->prev;

		while (previous != NULL && previous->n > temp->n)
		{
			/* swap nodes */
			if (previous->prev != NULL)
				previous->prev->next = temp;
			else
				*list = temp;

			if (temp->next != NULL)
				temp->next->prev = previous;

			previous->next = temp->next;
			temp->prev = previous->prev;
			temp->next = previous;
			previous->prev = temp;

			/* print list after each swap */
			print_list(*list);

			previous = temp->prev;
		}

		current = current->next;
	}
}
