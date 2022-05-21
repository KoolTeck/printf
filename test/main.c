#include "main.h"

/**
* main - test the -printf funct.
*
* Return: Always 0
*/
int main(void)
{
int len1, len2;
len1 = _printf("Let's try to printf a simple sentence.%%\n");
len2 = printf("Let's  try to printf a simple sentence.%%\n");
len1 = _printf("Character:[%c]\ng", 'H');
len2 =  printf("Character:[%c]\n", 'H');
len1 =   _printf("String:[%s]\n", "I am a string !");
len2 = printf("String:[%s]\n", "I am a string !");
printf("\n%d %d", len1, len2);

return (0);
}
