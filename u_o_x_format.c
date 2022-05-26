#include "main.h"

/**
* _putoct - prints the octal formats of int from arg list.
*
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/
int _putoct(va_list args)
{
unsigned int temp, num;
int i, size, write_c;
int *buff;

size = 0, i = 0, write_c = 0;
num = va_arg(args, unsigned int);
temp = num;
if (num == 0)
{
write_c += _putchar(48);
}
while (num > 0)
{
num /= 8;
size++;
}
buff = malloc(size *sizeof(int));
if (buff == NULL)
{
return (0);
}
while (i < size)
{
buff[i] = (temp % 8) + '0';
temp /= 8;
i++;
}
for (i = i - 1; i  >= 0; i--)
{
write_c += _putchar(buff[i]);
}
free(buff);
return (write_c);
}

/**
* _put_unsigned - prints the unsigned  format of int from arg list.
*
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/

int _put_unsigned(va_list args)
{
unsigned int num, n, size = 0, remainder;
int *buff;
int i = 0, write_c = 0;

n = va_arg(args, unsigned int);
num = n;
if (n == 0)
{
write_c += _putchar(48);
}
while (n > 0)
{
n /= 10;
size++;
}
size++;
buff = malloc(size *sizeof(int));
if (buff == NULL)
{
return (0);
}
while (num > 0)
{
remainder = (num % 10);
buff[i] = 48 + remainder;
num /= 10;
i++;
}
for (i = i - 1; i >= 0; --i)
{
write_c += _putchar(buff[i]);
}
free(buff);
return (write_c);
}

/**
* _putlow_hex - prints the hexadecimal in lower case.
*
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/
int _putlow_hex(va_list args)
{
unsigned int num, n, remainder, size = 0;
char *buff;
int i = 0, write_c = 0;

n = va_arg(args, unsigned int);
num = n;
if (n == 0)
{
write_c += _putchar(48);
}
while (n > 0)
{
n /= 16;
size++;
}
size++;
buff = malloc(size *sizeof(int));
if (buff == NULL)
{
return (0);
}
while (num > 0)
{
remainder = (num % 16);
buff[i++] = remainder < 10 ? 48 + remainder : 87 + remainder;
num /= 16;
}
for (i = i - 1; i >= 0; --i)
{
write_c += _putchar(buff[i]);
}
free(buff);
return (write_c);
}

/**
* _putcap_hex - prints the hexadecimal in uppetcase
*
* @args: the argument list
*
* Return: the num of bytes written or error num if error.
*/
int _putcap_hex(va_list args)
{
unsigned int num, n, remainder, size = 0;
char *buff;
int i = 0, write_c = 0;

n = va_arg(args, unsigned int);
num = n;
if (n == 0)
{
write_c += _putchar(48);
}
while (n > 0)
{
n /= 16;
size++;
}
size++;
buff = malloc(size *sizeof(int));
if (buff == NULL)
{
return (0);
}
while (num > 0)
{
remainder = (num % 16);
buff[i++] = remainder < 10 ? 48 + remainder : 55 + remainder;
num /= 16;
}
for (i = i - 1; i >= 0; --i)
{
write_c += _putchar(buff[i]);
}
free(buff);
return (write_c);
}
