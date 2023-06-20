#include "main.h"
/**
* _islower - checks for lowercase character
* @c : is the char to check
* Return: 1 if it lowercase. if its not return 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
