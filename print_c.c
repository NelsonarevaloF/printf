#include "holberton.h"
/**
 * print_c - sends c to print
 * @list: list of types or arguments to be passed
 * @count: counts chars printed
 * Return: void
 */
void print_c(va_list list, int *count)
{
_putchar(va_arg(list, int), count);
}
