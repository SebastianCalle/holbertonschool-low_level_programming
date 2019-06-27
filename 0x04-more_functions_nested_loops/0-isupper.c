#include "holberton.h"
/**
 * _isupper - Print if a character is uppercase
 * Return: 0
 * @c: input a character
 */
int _isupper(int c)
{
	int a;

	if (c >= 97 && c <= 122)
		a = 0;
	if (c >= 65 && c <= 90)
		a = 1;

	return (a);
}
