#include "main.h"

/**
* _putbinary - prints the binary formats of int from arg list.
*
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/
int _putbinary(va_list args)
{
unsigned int num, n;
int write_c, i, size;
int *buff;

write_c = 0;
size = 0;
i = 0;
n = va_arg(args, unsigned int);
num = n;
while (n / 2 > 0)
{
n /= 2;
size++;
}
size++;
buff = malloc(size *sizeof(int));
if (buff == NULL)
{
return (0);
}
while (i < size)
{
buff[i] = (num % 2) + '0';
num /= 2;
i++;
}
for (i = i - 1; i >= 0; --i)
{
write_c += _putchar(buff[i]);
}
free(buff);
return (write_c);
}
