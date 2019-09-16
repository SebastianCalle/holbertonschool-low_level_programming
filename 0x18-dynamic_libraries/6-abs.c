#include "holberton.h"
/**
 * _abs - function that compute absolute value of an integer
 * @i: is a parameter
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
