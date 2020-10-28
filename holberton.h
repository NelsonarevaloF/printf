#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct id - struct with the cases of operators
 *
 * @specifier: possible specifier
 * @print: The function associated at specifier
 */

typedef struct id
{
	char specifier;
	void (*print)(va_list, int *);
} id;

int _printf(const char *format, ...);
int _putchar(char c, int *count);
void print_c(va_list list, int *cont);
void print_s(va_list list, int *cont);
void print_d(va_list list, int *cont);
void print_i(va_list list, int *cont);
void get_print(va_list list, const char *format,
int *i, int *count, int *wall);

#endif
