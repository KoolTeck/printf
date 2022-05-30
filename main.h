#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
* struct prnt - struct for the format specifier
*
* @c: the format char.
* @f: associated function to call
* Description: stores the format specifier and function in memory
*/
typedef struct prnt
{
char *c;
int (*f)(va_list);
} prnt_fmt;
int _printf(const char *format, ...);
int prnt_format(struct prnt prnt_f[], const char *format, va_list args);
int _putchar(char c);
int _putstr(va_list args);
int _putarg_char(va_list args);
int _putper(va_list args);
int _putint(va_list args);
int _putbinary(va_list args);
int _putcap_hex(va_list args);
int _putlow_hex(va_list args);
int _put_unsigned(va_list args);
int _putoct(va_list args);
int _put_non_printable_ascii(va_list args);
/* helper functions */
int get_len(const char *s);
char *rev_string(char *s);
#endif /* MAIN_H */
