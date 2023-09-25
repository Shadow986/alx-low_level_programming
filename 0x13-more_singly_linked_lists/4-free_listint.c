#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: Pointer to the head of the list.
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		listint_t *temp = head;

		head = head->next;

		free(temp);
	}
	free(head);
}
