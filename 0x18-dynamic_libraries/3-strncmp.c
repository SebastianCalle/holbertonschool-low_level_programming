#include "holberton.h"
/**
 * _strncmp - compare two strings, stop after n bytes
 * @s1: firts string
 * @s2: second strign
 * @n: size of bytes
 * Return: 0 always
 */
int _strncmp(char *s1, char *s2, int n)
{
  unsigned char u1, u2;
  while (n-- > 0)
    {
      u1 = (unsigned char) *s1++;
      u2 = (unsigned char) *s2++;
      if (u1 != u2)
        return u1 - u2;
      if (u1 == '\0')
        return 0;
    }
  return 0;
}
