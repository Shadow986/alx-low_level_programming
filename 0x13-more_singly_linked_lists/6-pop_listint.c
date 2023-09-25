#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list
 * and returns the head node's data.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data of the head node or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;

	data = 0;

	listint_t *temp;

	if (head != NULL && *head != NULL)
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
