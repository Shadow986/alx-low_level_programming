#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: A pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *next;
	size_t node_count = 0;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		node_count++;

		if (current <= next)
		{
			*h = NULL;
			break;
		}

		current = next;
	}
	return (node_count);
}
