#include "holberton.h"
/**
 * print_all - prints anything
 * @format: list of types or arguments to be passed
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
