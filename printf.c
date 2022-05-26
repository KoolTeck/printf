#include "main.h"

/**
* _printf - prints to stdout
*
* @format: the char format to print
*
* Return: the num of bytes written
*/
int _printf(const char *format, ...)
{
int count;
va_list args;
prnt_fmt prnt_f[] = {
{"c", _putarg_char},
{"s", _putstr},
{"%", _putper},
{"d", _putint},
{"i", _putint},
{"b", _putbinary},
{"o", _putoct},
{"X", _putcap_hex},
{"x", _putlow_hex},
{"u", _put_unsigned},
{NULL, NULL},
};
if (format == NULL)
{
return (-1);
}
va_start(args, format);
count = 0;
count = prnt_format(prnt_f, format, args);
va_end(args);
return (count);
}
