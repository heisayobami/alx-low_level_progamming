#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, else 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *temp;
hash_node_t *newnode;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
	return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (temp == NULL)
{
	newnode = create_new_node(key, value);
	if (newnode == NULL)
		return (0);

	temp = newnode;
	return (1);
}

/*If key exists, replace value*/
while (temp != NULL)
{
	if (strcmp(key, temp->key) == 0)
	{
		free(temp->value);
		temp->value = strdup(value);
		return (1);
	}
	temp = temp->next;
}
/*If key doesn't exist, create new node*/
newnode = create_new_node(key, value);
if (newnode == NULL)
	return (0);

newnode->next = ht->array[index];
ht->array[index] = newnode;
return (1);
}

/**
 * create_new_node - create a new node
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 * value must be duplicated. value can be an empty string
 * Return: 1 on success, else 0
 */

hash_node_t *create_new_node (const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
