#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
* _printf - Produces output according to a format
* @format: Format string containing characters and specifiers
* Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
int count = 0;
va_list args;

if (!format)
return (-1);

va_start(args, format);
while (*format)
{
if (*format == '%') /* Handle format specifiers */
{
format++;
if (*format == 'c') /* %c: Character */
{
char c = (char)va_arg(args, int);
count += write(1, &c, 1);
}
else if (*format == 's') /* %s: String */
{
char *str = va_arg(args, char *);
if (!str)
str = "(null)";
while (*str)
count += write(1, str++, 1);
}
else if (*format == '%') /* %%: Percent */
{
count += write(1, "%", 1);
}
else
return (-1); /* Invalid specifier */
}
else /* Handle regular characters */
{
count += write(1, format, 1);
}
format++;
}
va_end(args);
return (count);
}
