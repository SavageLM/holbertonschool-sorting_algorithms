#include "sort.h"

/**
 * insertion_sort - Sorts via the insert algorithm
 * @list: list to sort
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *last;

	if (list == NULL || *list == NULL)
		return;

	current = *list;
	while ((current = curent->next))
	{
		tmp = current;
		while(tmp->prev && tmp-> < tmp->prev->n)
		{
			last = tmp->prev;
			if (tmp->next)
				tmp->next->pre = last;
			if (last->prev)
				last->prev->next = tmp;
			else
				*list = tmp;
			last->nest = tmp->next;
			tmp->prev = last->prev;
			tmp->next = last;
			last->prev = tmp;

			print_list(*list);
		}
	}
}
