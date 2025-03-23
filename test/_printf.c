#include "main.h"

/**
* _printf - Custom printf function
* @format: The format string
* Return: Number of characters printed
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
if (*format == 'c')
count += _putchar(va_arg(args, int));
else if (*format == 's')
count += print_string(va_arg(args, char *));
else if (*format == '%')
count += _putchar('%');
else
{
count += _putchar('%');
count += _putchar(*format);
}
}
else
count += _putchar(*format);

format++;
}

va_end(args);
return (count);
}
