#include "main.h"
/**
* _isalpha - checks for alphabetics
* @c : is the char to check in ASCII
* Return: 1 if its alphabetic. if its not return 0
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
