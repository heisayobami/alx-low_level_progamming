#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table you want to delete
 */

void hash_table_delete(hash_table_t *ht)
{
    if (ht==NULL)
        return;
	
    hash_node_t *prevnode, *nextnode;
    
    for (int index=0; index<ht->size; index++)
    {
        prevnode = nextnode = ht->array[index];
        while (nextnode!=NULL)
        {
            nextnode = prevnode->next;
            free(prevnode->value);
            free(prevnode->key);
            free(prevnode);
            prevnode = nextnode;
        }
    }
    free(ht->array);
    free(ht);
}
