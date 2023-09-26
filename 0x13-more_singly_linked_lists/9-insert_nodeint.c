#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that
 * Inserts a new node at a given position in a linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (x = 0; x < idx - 1; x++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
