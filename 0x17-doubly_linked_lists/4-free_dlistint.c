#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
