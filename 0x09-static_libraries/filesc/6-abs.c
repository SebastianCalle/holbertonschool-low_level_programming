#include "holberton.h"
/**
 * _abs - function that compute absolute value of an integer
 * @i: is a parameter
 * Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		i = i * -1;
	}
	return (i);
}
