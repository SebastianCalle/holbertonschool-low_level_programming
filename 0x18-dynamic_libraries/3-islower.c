#include "holberton.h"
/**
 * _islower - prints if is lowercase
 * @c: is parameter
 * Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
