#include "main.h"
/**
* puts_half - prints half of a string
* If the number of characters is odd n = (length_of_the_string - 1) / 2
* @str: input
* Return: half of input
*/
void puts_half(char *str)
{
int a, n, longe;

longe = 0;

for (a = 0; str[a] != '\0'; a++)
longe++;

n = (longe / 2);

if ((longe % 2) == 1)
n = ((longe + 1) / 2);

for (a = n; str[a] != '\0'; a++)
_putchar(str[a]);
_putchar('\n');
}
