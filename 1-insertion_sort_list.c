#include "sort.h"

/**
 * insertion_sort_list - Sorts via the insert algorithm
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *last;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while ((current = current->next))
	{
		tmp = current;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			last = tmp->prev;
			if (tmp->next)
				tmp->next->prev = last;
			if (last->prev)
				last->prev->next = tmp;
			else
				*list = tmp;
			last->next = tmp->next;
			tmp->prev = last->prev;
			tmp->next = last;
			last->prev = tmp;

			print_list(*list);
		}
	}
}
