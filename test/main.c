#include "main.h"

/**
* main - test the -printf funct.
*
* Return: Always 0
*/
int main(void)
{
int len1, len2;
len1 = _printf("Let's try to printf a simple %% sentenc%%.\n");
len2 = printf("Let's try to printf a simple %% sentenc%%.\n");
len1 = _printf("Character%%:[%c] %c\n", 'H', 'c');
len2 =  printf("Character%%:[%c] %c\n", 'H', 'c');
len1 =   _printf(NULL, "hello");
 len2 = printf(NULL,"hello");
printf("\n%d %d",len1, len2);
return (0);
}
