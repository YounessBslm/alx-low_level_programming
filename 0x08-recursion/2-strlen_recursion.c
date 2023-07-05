#include "main.h"
/**
* _strlen_recursion - length of a string.
* @s: The string to be measured.
*
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
int longeur = 0;

if (*s)
{
longeur++;
longeur += _strlen_recursion(s + 1);
}

return (longeur);
}
