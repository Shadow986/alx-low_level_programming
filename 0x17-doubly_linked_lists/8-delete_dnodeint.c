#include "lists.h"

/**
 * delete_dnodeint_at_index - a functione that deletes the node
 * at a given index of a dlistint_t linked list.
 * @head: Double pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev_node;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && x < index)
	{
		prev_node = temp;
		temp = temp->next;
		x++;
	}

	if (temp == NULL)
		return (-1);

	prev_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev_node;

	free(temp);
	return (1);
}
