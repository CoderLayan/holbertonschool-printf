#include "main.h"
#include <stdarg.h>

/**
* _printf - Produces output according to a format
* @format: Format string containing the characters and specifiers
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;

if (!format)
return (-1); /* Null format string */

va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 'c') /* Handle %c */
{
char c = va_arg(args, int);
count += _putchar(c);
}
else if (*format == 's') /* Handle %s */
{
char *str = va_arg(args, char *);
if (!str)
str = "(null)";
while (*str)
count += _putchar(*str++);
}
else if (*format == '%') /* Handle %% */
{
count += _putchar('%');
}
else /* Invalid specifier */
{
count += _putchar('%');
count += _putchar(*format);
}
}
else /* Print regular characters */
{
count += _putchar(*format);
}
format++;
}
va_end(args);
return (count);
}
