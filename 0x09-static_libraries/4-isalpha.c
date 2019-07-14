#include "holberton.h"
/**
 * _isalpha - prints if the caracter is alphabet
 * @c: is parameter
 * Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);

}
