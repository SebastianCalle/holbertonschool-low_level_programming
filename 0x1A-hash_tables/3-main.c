#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "holberton");
    hash_table_set(ht, "mentioner", "holberton");
    hash_table_set(ht, "hetairas", "School");
    hash_table_set(ht, "mentioner", "School");
    hash_table_set(ht, "hola", "holberton");
    hash_table_set(ht, "mundo", "holberton");
    hash_table_set(ht, "hetairas", "bueno");
    return (EXIT_SUCCESS);
}
