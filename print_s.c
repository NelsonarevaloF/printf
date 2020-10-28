#include "holberton.h"
/**
 * print_s - prints strings
 * @list: list of types or arguments to be passed
 * @count: counts char printed
 * Return: void
 */
void print_s(va_list list, int *count)
{
char *str;
int i = 0;

str = va_arg(list, char *);
if (!str)
str = "(null)";
while (str[i])
{
_putchar(str[i], count);
i++;
}
}
