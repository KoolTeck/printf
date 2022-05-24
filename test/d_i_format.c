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
int i, written_num = 0, n;
unsigned int num;
char *buff;

n = va_arg(args, int);
buff = malloc(sizeof(char));
if (buff == NULL)
{
return (-1);
}
i = 0;
if (n == 0)
{
written_num += _putchar(48);
}
if (n < 0)
{
num = n *= -1;
written_num += _putchar('-');
}
else 
{
num = n;
}
while (num > 0)
{
buff[i] = (num % 10) + '0';
num /= 10;
i++;
}
buff = rev_string(buff);
for (i = 0; buff[i] != '\0'; i++)
{
written_num += _putchar(buff[i]);
}
free(buff);
return (written_num);
}
