#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending order
 *                        using Insertion sort algorithm
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *tmp, *prv,*nxt;

	if (!list || !(*list) || !((*list)->next))
		return;
	current = (*list);
	tmp = (*list)->next;

	while(tmp)
	{
		nxt = tmp->next;
		while (current && tmp->n < current->n)
		{
			if (current->prev)
				current->prev->next = tmp;
			else
				*list = tmp;
			if (tmp->next)
				tmp->next->prev = current;
			prv = tmp->next;
			tmp->next = current;
			tmp->prev = current->prev;
			current->next = prv;
			current->prev = tmp;
			print_list(*list);

			current = tmp->prev;
		}
		
		tmp = nxt;
		if (tmp)
			current = tmp->prev;
			
	
	}
}
