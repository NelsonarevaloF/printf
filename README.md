# 0x11. C - printf
# _PRINTF IS OUR OWN SMALL VERSION OF PRINTF

<img src="https://slideplayer.com/slide/3357165/12/images/6/examples+-+printf%28%29.jpg" alt="screen shot of custom printf function">

## Description

Here you will find our basic version of ``printf()`` from ``stdio.h``, which is called ``_printf()``.

Printf is the function used to print formatted data.

## Synopsis

This is an easy function to use, it is used just as the regular printf, but the holberton header file is needede.

* Prototype: ``int _printf(const char *format, ...);``
* Header: ``holberton.h``

### _Printf

Our goal was to make a function that works as similar as we could as the original printf, with only basic functionality.

### Our formating options

* ``%c``: prints a single char.
* ``%d``: prints an integer.
* ``%i``: prints an integer.
* ``%s``: iterates char by char until it prints the full string.

#### Example of how to use ``%d`` and ``%i``

``_printf("Length:[%d, %i]\n", len, len);``

#### Example of how to use ``%c``

``_printf("Character:[%c]\n", 'H');``

#### Example of how to use ``%s``

``_printf("String:[%s]\n", "I am a string !");``


### Functions used

* ``va_start``, ``va_end``, ``va_copy``,
``va_arg`` and our own version of ``_putchar``

## File List

* ``_printf`` is the main function.
* ``print_s`` This function prints strings.
* ``print_c`` This function prints characters.
* ``print_i`` This function prints integers.
* ``get_print`` This function evaluates the cases for special characters.
* ``_putchar`` This function is our own version of putchar. It uses write and it counts the characters printed.

## Authors

* Nelson Arevalo - https://github.com/NelsonarevaloF
* Laura Valencia - https://github.com/lauraliliana
