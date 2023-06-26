#include "main.h"
/**
* print_rev - write in reverse
* @s: string
* return: 0
*/
void print_rev(char *s)
{
int longe = 0;
int p;

while (*s != '\0')
{
longe++;
s++;
}
s--;
for (p = longe; p > 0; p--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
