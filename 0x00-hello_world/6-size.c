#include <stdio.h>
/**
 * main - Print the size of types variables
 * Return:0
 */
int main(void)
{
char c = 1;
int i = 1;
long int li = 1;
long long int lli = 1;
float f = 1;
printf("Size of a char: %d byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %d byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %d byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
