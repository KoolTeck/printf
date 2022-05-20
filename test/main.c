#include "main.h"

/**
* main - test the -printf funct.
*
* Return: Always 0
*/
int main(void)
{
int n;

n = _printf("hello %% world (%c) hh %s", 'c', "going");
_printf("\n%d", n);

return (0);
}
