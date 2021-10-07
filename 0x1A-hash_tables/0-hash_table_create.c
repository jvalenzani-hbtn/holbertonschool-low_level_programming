#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size:  is the size of the array
 *
 * Return: a pointer to the newly created hash table or NULL if something wrong.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    if(size > 0)
    {
        ht = malloc(sizeof(hash_table_t));
        if(ht)
        {
            ht->size = size;
            ht->array = malloc(size * sizeof(hash_node_t *));
            if(ht->array)
            {
                return ht;
            }
            free(ht);
        }
    }
    return NULL;
}