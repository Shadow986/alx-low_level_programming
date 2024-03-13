#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: A pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * Return: If the value is not present or
 * the head of the list is NULL, returns
 * NULL. Otherwise, returns a pointer to the first node where the value
 * is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *next = NULL;

	if (list == NULL)
		return (NULL);

	while (list->express != NULL)
	{
		prev = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n >= value)
			break;
	}
	if (list->n < value && list->express == NULL)
	{
		prev = list;
		while (list->next != NULL)
			list = list->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, list->index);
	while (prev != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
