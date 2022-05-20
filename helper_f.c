#include "main.h"

/**
* rev_string - reverses a string
*
* @s: pointer to the char array.
*
* Return: a pointer to the reversed str.
*/
char *rev_string(char *s)
{
int len;
int i, j, k, tmp;
i = 0;
k = 0;
if (s[i] != 0)
{
while (s[k] != 0)
{
len = k;
k++;
}
j = len;
while (i < j)
{
tmp = s[i];
s[i] = s[j];
s[j] = tmp;
i++;
j--;
}
}
else
{
s[i] = s[i];
}
return (s);
}

/**
* get_len - returns the length of a string
*
* @s: pointer to the char array.
*
* Return: the length int.
*/
int get_len(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
* _putchar - writes a char to std out.
*
* @c: the char to write.
*
* Return: the num of bytes written or num if error.
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
