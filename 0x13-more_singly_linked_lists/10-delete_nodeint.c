#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the
 * node at a given index of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
