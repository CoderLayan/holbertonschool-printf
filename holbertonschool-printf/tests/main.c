#include <stdio.h>
#include "main.h"

int main(void)
{
int len;

/* Test case: Printing a simple sentence */
_printf("Let's print a simple sentence.\n");

/* Test case: Printing a single character */
len = _printf("%c", 'S');
printf("Length of '%c': %d\n", 'S', len);

/* Test case: Printing a string */
len = _printf("This is a string: %s\n", "Hello");
printf("Length of string: %d\n", len);

/* Test case: Printing a percent sign */
len = _printf("Percent sign: %%\n");
printf("Length with percent: %d\n", len);

/* Test case: Handling NULL string */
len = _printf("NULL string: %s\n", (char *)0);
printf("Length with NULL string: %d\n", len);

return (0);
}
