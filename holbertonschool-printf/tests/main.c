#include <stdio.h>
#include "main.h"

int main(void)
{
int len;

len = _printf("Character:[%c]\n", 'H');
_printf("Length:[%d]\n", len); /* Use len to avoid unused variable warning */
printf("Character:[%c]\n", 'H');

len = _printf("String:[%s]\n", "Hello, world!");
_printf("Length:[%d]\n", len); /* Use len to avoid unused variable warning */
printf("String:[%s]\n", "Hello, world!");

len = _printf("Percent:[%%]\n");
_printf("Length:[%d]\n", len); /* Use len to avoid unused variable warning */
printf("Percent:[%%]\n");

return (0);
}
