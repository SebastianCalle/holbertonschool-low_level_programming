#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "wor, world";
    char *f = "word";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
