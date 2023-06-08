#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

int main(void)
{
    hash_table_t *ht;
    unsigned long int size = 10;
    unsigned long int index;
    
    /* Create a hash table */
    ht = hash_table_create(size);
    if (ht == NULL)
    {
        printf("Failed to create hash table.\n");
        return 1;
    }

    /* Add key/value pairs with potential collisions */
    hash_table_set(ht, "apple", "red");
    hash_table_set(ht, "banana", "yellow");
    hash_table_set(ht, "cherry", "red");
    hash_table_set(ht, "date", "brown");

    /* Check the indexes of the keys */
    index = key_index((const unsigned char *)"apple", size);
    printf("Index of 'apple': %lu\n", index);
    
    index = key_index((const unsigned char *)"banana", size);
    printf("Index of 'banana': %lu\n", index);
    
    index = key_index((const unsigned char *)"cherry", size);
    printf("Index of 'cherry': %lu\n", index);
    
    index = key_index((const unsigned char *)"date", size);
    printf("Index of 'date': %lu\n", index);

    return 0;
}

