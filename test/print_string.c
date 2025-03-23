#include "main.h"

/**
* print_string - Prints a string
* @str: The string to print
* Return: Number of characters printed
*/
int print_string(char *str)
{
int count = 0;

if (!str)
str = "(null)";

while (*str)
{
count += _putchar(*str);
str++;
}
return (count);
}
