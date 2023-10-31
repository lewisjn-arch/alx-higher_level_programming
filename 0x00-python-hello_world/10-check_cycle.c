#include <stdlib.h>
#include "lists.h"

/**
 * cycle - checks if a singly-linked list contains a cycle
 * @list: a singly-linked list
 *
 * Return: if there is no cycle - 0
 *         if there is a cycle - 1
 */
int cycle(int_list, *list)
{
	int_list, *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = list->next->next;

	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}
	return (0);
}
