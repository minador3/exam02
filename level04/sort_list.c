#include "ft_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*start;

	// Save the beginning of the list to return it later
	start = lst;

	// Loop as long as we have a current node and a next node
	while (lst && lst->next)
	{
		// According to the subject: cmp returns 0 if order is WRONG.
		// So if cmp returns 0, we must swap.
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			// Swap the data
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;

			// If we swapped, we might have messed up the order earlier in the list.
			// The simplest fix is to restart the check from the very beginning.
			lst = start;
		}
		else
		{
			// If order is correct, move to the next node
			lst = lst->next;
		}
	}
	return (start);
}
