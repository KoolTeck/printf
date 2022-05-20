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
int count = 0, i = 0, j, k, len;

len = get_len(format);
for (k = 0; format[k] != '\0'; k++)
{
i = 0;
while (format[k] != '%' && i != len && format[k] != '\0')
{
count += _putchar(format[k]);
k++;
i++;
}
k++;
if (format[k] == '%')
{
count += _putchar('%');
}
for (j = 0; j < 2; j++)
{
if (format[k] == prnt_f[j].c)
{
count += prnt_f[j].f(args);
}
}
}
return (count);
}
