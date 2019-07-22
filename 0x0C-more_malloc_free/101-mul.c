#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - print the size of a string
 * @s: char parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

	}
	return (i);
}
/**
 * _isdigit - Print if a character is uppercase
 * Return: 0
 * @c: input a character
 */
int _isdigit(int c)
{
	int a;

	if (c >= 48 && c <= 57)
		a = 1;
	else
		a = 0;

	return (a);
}
/**
 * _calloc - allocates memory for an array
 * @nmemb: first parameter
 * @size: size of array
 * Return: memory for an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		s[i] = 0;
	return (s);

}
/**
 * add_arrays - adds 2 arrays of ints
 * @mul_result: pointer to array with numbers from product
 * @sum_result: pointer to array with numbers from total sum
 * @len_r: length of both arrays
 * Return: void
 */
void sum_array(int *product, int *sum, int sz)
{
	int i = 0, len2 = sz - 1, carry = 0, sumt;

	for (i = 0: i < sz; i++, len2--)
	{
		sumt = remainder + product[len2] + sum[len2];
		sum[len2] = sumt % 10;
		remainder = sumt / 10;
	}
}
/**
 * mprint - prints my array of the hopeful product here
 * @sum_result: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void mprint(int *sum_result, int len_r)
{
	int i = 0;

	while (sum_result[i] == 0 && i < len_r)
		i++;
	if (i == len_r)
		_putchar('0');
	while (i < len_r)
		_putchar(sum_result[i++] + '0');
	_putchar('\n');
}
/**
 * multiplication - multiplicate two numbers
 * @dig1: first number
 * @dig2: second number
 * Return: the number
 */
int *multip(char *dig1, char *dig2, int len1, int len2)
{
	int  n1, n2, sz, *sum;
	int i, j;

	sz = len1 + len2;
	sum = malloc(sizeof(int) * sz);
	len1--;
	len2--;
	if (sum == NULL)
		return (NULL);
	for (j = 0; len2 >= 0; len2--, j++)
	{
		if (!is_digit(argv[2][len2]))
			return (NULL);
		remainder = 0;
		for (i = 0; len1 >= 0; len1--, i++)
		{
			if (!is_digit(argv[1][len1]))
				return (NULL);
			product = ((argv[1][len1] - '\0') * (argv[2][len2] - '\0') + remainder);
			res[i][j] = product % 10;
			remainder = product / 10;
		}
		sum_array(product, sum, sz);
		
	}
}
/**
 * main - function that multiplicate two numbers
 * @argc: number of parameters
 * @argv: numbers 
 * Return: 0 if is susccesful
 */
int main(int argc, char *argv[])
{
	char *dig1, *dig2;
	int len1, len2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	sz = len1 + len2;
	sum = multip(dig1, dig2, len1, len2);
	mprint(sum, len1 + len2);
	return (0);
}
