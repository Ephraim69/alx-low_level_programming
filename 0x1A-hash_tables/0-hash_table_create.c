#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
*
* @size: the size of the array
* Return: returns a pointer to the newly created tables
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_node_t) * size);
	if (!new_table)
		return (NULL);

	return (new_table);
}
