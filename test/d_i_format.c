#include "main.h"

/**
* _putint - writes an int from args list to std out.
*
* @args: the arg list.
*
* Return: the num of bytes written or error num if error.
*/
int _putint(va_list args)
{
int num, i, written_num = 0, neg = 0;
char *buff;

num = va_arg(args, int);
buff = malloc(sizeof(char));
i = 0;
if (num == 0)
{
written_num += _putchar(48);
}
if (num < 0)
{
num *= -1;
neg = 1;
}
while (num > 0)
{
buff[i] = (num % 10) + '0';
num /= 10;
i++;
}
if (neg)
{
buff[i] = '-';
}
buff = rev_string(buff);
for (i = 0; buff[i] != '\0'; i++)
{
written_num += _putchar(buff[i]);
}
free(buff);
return (written_num);
}
