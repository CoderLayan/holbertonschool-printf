#include "main.h"

/**
* print_integer - Prints an integer (handles %d and %i).
* @args: The argument list containing the integer.
*
* Return: Number of characters printed.
*/
#include <limits.h> /* For INT_MIN */

/**
* print_integer - Prints an integer (handles %d and %i).
* @args: The argument list containing the integer.
*
* Return: Number of characters printed.
*/
int print_integer(va_list args)
{
int num = va_arg(args, int);
int count = 0;

/* Handle INT_MIN explicitly */
if (num == INT_MIN)
{
count += write(1, "-", 1); /* Print the negative sign */
count += write(1, "2147483648", 10); /* Print INT_MIN as a string */
return (count);
}

/* Handle negative numbers */
if (num < 0)
{
count += write(1, "-", 1);
num = -num;
}

/* Handle zero */
if (num == 0)
{
count += write(1, "0", 1);
return (count);
}

/* Use helper function to print digits */
count += print_number(num);

return (count);
}

/**
* _printf - Produces output according to a format.
* @format: A character string containing directives.
*
* Return: Number of characters printed (excluding null byte),
*         or -1 if an error occurs.
*/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (!format)
return (-1);

va_start(args, format);

while (*format)
{
if (*format == '%')
{
format++;
if (!*format)
return (-1);

if (*format == 'c')
count += print_char(args);
else if (*format == 's')
count += print_string(args);
else if (*format == '%')
count += print_percent();
else if (*format == 'd' || *format == 'i') /* Handle %d and %i */
count += print_integer(args);
else
{
count += write(1, "%", 1);
count += write(1, format, 1);
}
}
else
{
count += write(1, format, 1);
}
format++;
}

va_end(args);
return (count);
}
