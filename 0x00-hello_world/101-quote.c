#include <stdio.h>
#include <unistd.h>
/**
*main - print message without printf or put
*Return: 1 of have succes
*/
int main(void)
{
int l;
l = sizeof("and that piece of art is useful\"
- Dora Korpar, 2015-10-19");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", l);
return (1);
}
