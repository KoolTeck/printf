#include "main.h"
#include <limits.h>

/**
* main - test the -printf funct.
*
* Return: Always 0
*/
int main(void)
{
int len1, len2;
int n, n2;
len1 = _printf("Let's try to printf a simple %% sentenc%%.\n");
len2 = printf("Let's try to printf a simple %% sentenc%%.\n");
len1 = _printf("Character%%:[%c] %c\n", 'H', 'c');
len2 =  printf("Character%%:[%c] %c\n", 'H', 'c');
printf("\n%d %d",len1, len2);
printf("\n%d %d\n", len1, len2);
n = _printf("hello %% world (%d) hh %s\n", 5666, "going");
n = _printf("%d\n", INT_MIN);
n2 =  printf ("%d\n",INT_MIN);
n = _printf("%d\n", INT_MAX);
n2 =  printf ("%d\n",INT_MAX);
n = _printf("%i + %i = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
n2= printf("%i + %i = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
n = _printf("iddi%diddiiddi\n", 1024);
n2 = _printf("iddi%iiddiiddi\n", 1024);
n = _printf("%b %b\n", 1024, -1024);
n = _printf("%u %o %X %x\n", -1220, 1220, 1220 , 1220);
n2 = printf("%u %o %X %x\n", -1220, 1220, 1220, 1220);

printf ("%d %d", n, n2);

return (0);
}
