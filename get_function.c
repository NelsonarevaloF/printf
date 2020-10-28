#include "holberton.h"

/**
 * get_print - call at correct function to print
 * @list: arguments varidics
 * @format: string with the options
 * @i: iterator variable to move us in the string
 * @count: number of printed done
 * @wall: wall to on or off some condition
 * Return: No return
 */

void get_print(va_list list, const char *format, int *i, int *count, int *wall)
{
	id arr_opc[] = {
	{'c', print_c},
	{'s', print_s},
	{'d', print_d},
	{'i', print_d},
	{'\0', NULL}
	};

	int j = 0;

	while (arr_opc[j].specifier)
	{
		if (format[*i + 1] == arr_opc[j].specifier)
		{
			arr_opc[j].print(list, count);
			*i += 2;
			*wall = 0;
			break;
		}
		j++;
	}
	if (format[*i + 1] == '%' && format[*i] == '%')
	{
		_putchar(format[*i], count);
		*wall = 0;
		*i += 2;
	}
}
