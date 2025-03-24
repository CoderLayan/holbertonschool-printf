#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h> /* For variadic functions */
#include <unistd.h> /* For the write function */

/* Function prototypes */
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(void);
int print_integer(va_list args); /* For %d and %i specifiers */

#endif /* MAIN_H */
