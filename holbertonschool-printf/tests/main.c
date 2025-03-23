#include "../main.h"
#include <stdio.h>

int main(void)
{
_printf("Simple string: %s\n", "Hello, World!");
_printf("Character: %c\n", 'A');
_printf("Percentage: %%\n");
_printf("NULL string: [%s]\n", NULL);
_printf("Unknown specifier: [%K]\n");
_printf("Single percent: [%]\n"); /* Should return -1 */
return (0);
}
