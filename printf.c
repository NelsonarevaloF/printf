#include "holberton.h"

/**
 * _printf - duplicate of printf function
 * @format: characteres to prints and
 * operators to evaluate
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, wall = 0, count = 0;

	va_start(list, format);
	if (!format)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			get_print(list, format, &i, &count, &wall);
		}

		if (format[i] && format[i] != '%')
		{
			_putchar(format[i], &count);
			i++;
			continue;
		}

		if (format[i] == '%' && (format[i + 1] == ' ' || format[i + 1] == '\0'))
			return (-1);
		if (format[i] == '%' && wall == 1)
		{
			_putchar(format[i], &count);
			i++;
		}
		wall = 1;
	}
	return (count);
}
