#include "lists.h"

/**
 * list_len - a function that returns the
 * number of elements in a linked list_t list
 * @head: pointer to the head of the list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
