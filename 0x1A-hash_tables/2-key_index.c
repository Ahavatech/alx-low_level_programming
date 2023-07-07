#include "hash_tables.h"
/**
 * key_index - finds the index of a key
 * @key: key
 * @size: size of hash table
 * Description: finds the index of a given key
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
