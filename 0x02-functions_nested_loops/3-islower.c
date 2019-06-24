#include "holberton.h"
/**
 * _isalpha - prints if is alpha
 *Return: 0
*/
int _islower(int c)
{
	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);

}
