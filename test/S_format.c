#include "main.h"

/**
* _put_non_printable_ascii - prints the str from arg list.
*
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/
int _put_non_printable_ascii(va_list args)
{
char *str, *buff;
unsigned int n, num, remainder;
int i = 0, count = 0, size = 0, j;

str = va_arg(args, char *);
while (str[i] != '\0')
{
if (str[i] < 32 || str[i] >= 127)
{
count += _putchar('\\');
count += _putchar('x');
if (str[i] >= 0 && str[i] <= 15)
{
count += _putchar(48);
}
n = str[i] + 0;
num = n;
while (n > 0)
{
size++;
n /= 16;
}
size++;
buff = malloc(size *sizeof(int));
if (buff == NULL)
{
return (0);
}
for (j = 0; num > 0; j++)
{
remainder = num % 16;
buff[j] = remainder < 10 ? remainder + 48 : remainder + 55;
num /= 16;
}
while (j > 0)
{
j -= 1;
count += _putchar(buff[j]);
j--;
}
}
else
{
count += _putchar(str[i]);
}
i++;
}
return (count);
}
