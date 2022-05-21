#include "main.h"

/**
* prnt_format - prints the format literally and also gets the specifier funct.
*
* @prnt_f: the array of print format specifier and funct.
* @format: the format literal
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/
int prnt_format(struct prnt prnt_f[], const char *format, va_list args)
{
int count = 0, i = 0, j, len;
char nex;
len = get_len(format);
for (; i < len; i++)
{
if (format[i] != '%')
{
count += _putchar(format[i]);
continue;
}
i++;
nex = format[i++];
if (nex == '%')
{
count += _putchar(nex);
}
for (j = 0; j < 3; j++)
{
if (nex == prnt_f[j].c)
{
count += prnt_f[j].f(args);
}
if (nex != prnt_f[j].c)
{
count += _putchar(format[i++]);
}
}
}
return (count);
}
