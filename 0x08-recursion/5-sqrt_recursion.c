#include "holberton.h"
/**
 * _pow - Return a number for same number
 * @n: parameter to compare
 * @i: number to multiplicate
 * Return: number elevate to square
 */
int _pow(int n, int i)
{

	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_pow(n, (i + 1)));

}

/**
 * _sqrt_recursion - retrun the natural square root of a number
 * @n: integer parameter
 * Return: square of a number
 */
int _sqrt_recursion(int n)
{
	return (_pow(n, 1));
}
