#include "main.h"

int main(void)
{
/* Test cases for _printf */
_printf("Simple sentence: Hello, world!\n");
_printf("Character: %c\n", 'A');
_printf("String: %s\n", "Hello, world!");
_printf("Percent: %%\n");
_printf("NULL string: %s\n", (char *)0);

return (0);
}
