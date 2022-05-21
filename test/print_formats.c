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
int count = 0, i = 0, j;

for (i = 0; format[i] != '\0'; i++)
{
if (format[i] == '%')
{
for (j = 0; prnt_f[j].c != NULL; j++)
{
if (format[i + 1] == '%')
{
count += _putchar('%');
break;
}
if (format[i + 1] == prnt_f[j].c[0])
{
count += prnt_f[j].f(args);
break;
}
}
i += 1;
}
else
{
count += _putchar(format[i]);
}
}
return (count);
}
