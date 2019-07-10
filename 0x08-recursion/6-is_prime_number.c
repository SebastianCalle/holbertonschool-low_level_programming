#include "holberton.h"
/**
 * is_prime_number - integer is a prime number 
 * @n: Integer parameter
 * Return: 1 if is prime or 0 is'n prime
 */
int is_prime_number(int n)
{
	if (n % 2 == 0 && n > 2)
		return (0);
	else if (n == 1)
		return (0);
	else if (n < 0)
		return (0);
	else if (n % 3 == 0 && n > 3)
		return (0);
	else if (n % 5 == 0 && n > 5)
		return (0);
	else if (n % 7 == 0 && n > 7)
		return (0);
	else if (n % 11 == 0 && n > 11)
		return (0);
	else
		return (1);

}
