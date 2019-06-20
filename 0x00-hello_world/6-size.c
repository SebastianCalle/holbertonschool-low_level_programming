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
printf("Size of a char: %i byte(s)\n",sizeof(c));
printf("Size of an int: %i byte(s)\n", sizeof(i));
printf("Size of a long int: %i byte(s)\n", sizeof(li));
printf("Size of a long long int: %i byte(s)\n", sizeof(lli));
printf("Size of a float: %i byte(s)\n", sizeof(f));
return (0);
}
