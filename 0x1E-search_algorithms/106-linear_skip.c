#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: A pointer to the head of the list to search in.
 * @size: The number of nodes in list.
 * @value: The value to search for.
 * Return: If the value is not present or the head of the
 * list is NULL, returns
 * NULL. Otherwise, returns a pointer to the first node where the value
 * is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, jump;
	listint_t *prev;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	prev = list;
	while (list->next != NULL && list->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n >= value)
			break;
		prev = list;
		for (i = 0; i < jump && list->next != NULL; i++)
			list = list->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, list->index);
	while (prev->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
