#include "main.h"
/**
* puts2 - function that print a charachter and ignore the next one
* starting with the first character
* @str: input
* Return: print
*/
void puts2(char *str)
{
int longe = 0;
int t = 0;
char *y = str;
int p;

while (*y != '\0')
{
y++;
longe++;
}
t = longe - 1;
for (p = 0 ; p <= t ; p++)
{
if (p % 2 == 0)
{
_putchar(str[p]);
}
}
_putchar('\n');
}
