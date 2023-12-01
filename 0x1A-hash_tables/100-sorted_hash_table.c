#include "hash_tables.h"

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key, string
 * @value: The value corresponding to the key
 * @next: A pointer to the next node of the sorted hash table
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: The array of size 'size'
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
} shash_table_t;

/**
 * shash_table_create - creates a sorted hash table
 * @size: size of the array
 * Return: pointer to the newly created sorted hash table
 * If something went wrong, returns NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;
	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}

/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: the sorted hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the sorted hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
    }
    return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 * @ht: the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    unsigned long int i;
    shash_node_t *node;
    char *sep = "";
    if (ht == NULL)
        return;
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            printf("%s'%s': '%s'", sep, node->key, node->value);
            sep = ", ";
            node = node->next;
        }
    }
    printf("}\n");
}
