#include "main.h"
#include <stdarg.h>

/**
* handle_format - Handles format specifiers and prints corresponding output
* @format: The format specifier
* @args: The arguments list
* Return: Number of characters printed
*/
int handle_format(char format, va_list args)
{
int count = 0;

if (format == 'c')
count += _putchar(va_arg(args, int));
else if (format == 's')
count += print_string(va_arg(args, char *));
else if (format == '%')
count += _putchar('%');
else
{
count += _putchar('%');
count += _putchar(format);
}

return (count);
}

/**
* _printf - Custom printf function
* @format: The format string
* Return: Number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (!format)
return (-1); /* Return error for NULL format */

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0') /* Handle only '%' */
return (-1);
count += handle_format(*format, args);
}
else
count += _putchar(*format);

format++;
}

va_end(args);
return (count);
}
