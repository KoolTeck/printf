#include "main.h"

/**
* _putarg_char - writes a char from args list to std out.
*
* @args: the arg list.
*
* Return: the num of bytes written or error num if error.
*/
int _putarg_char(va_list args)
{
char c = va_arg(args, int);
return (write(1, &c, 1));
}

/**
* _putstr - writes a str from args list to std out.
*
* @args: the arg list.
*
* Return: the num of bytes written or error num if error.
*/
int _putstr(va_list args)
{
int len;
char *s = va_arg(args, char *);
len = get_len(s);

return (write(1, s, len));
}
