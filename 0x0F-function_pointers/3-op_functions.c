#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - return the sum of a and b
 * @a: first number
 * @b: second number
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return rest of a and b
 * @a: first number
 * @b: second number
 * Return: the rest
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplicate two numbers
 * @a: first number
 * @b: second number
 * Return: the multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: the division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);

}
/**
 * op_mod - module of two numbers
 * @a: first number
 * @b: second number
 * Return: the module
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
