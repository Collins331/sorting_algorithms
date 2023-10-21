#include "sort.h"

/**
 * insertion_sort_list - sorts the doubly-linked list
 * by insertion of elements at correct position
 * @list: pointer to the list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;
		prev = current->prev;

		while (prev && prev->n > temp->n)
		{
			if (temp->next)
				temp->next->prev = prev;

			prev->next = temp->next;
			temp->prev = prev->prev;
			temp->next = prev;

			if (prev->prev)
				prev->prev->next = temp;
			else
				*list = temp;

			prev->prev = temp;
			prev = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
