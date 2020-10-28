#include "holberton.h"
/**
 * print_d - processes integers and uses _putchar
 * @list: list of types or arguments to be passed
 * @count: Pointer to Counter of printed characters
 * Return: void
 */
void print_d(va_list list, int *count)
{
	int number = va_arg(list, int);
	unsigned int i, nOriginal, digit;
	unsigned int leng = 0;

	if (!number)
	{
		_putchar('0', count);
		return;
	}
	if (number < 0)
	{
		_putchar(45, count);
		number *= -1;
	}
	nOriginal = number;
	while (number)
	{
		number = number / 10;
		leng++;
	}
	number = 1;
	for (i = 1; i < leng; i++)
		number = number * 10;
	for (i = 0; i < leng; i++)
	{
		digit = ((nOriginal / number) % 10) + '0';
		_putchar(digit, count);
		number /= 10;
	}
}
