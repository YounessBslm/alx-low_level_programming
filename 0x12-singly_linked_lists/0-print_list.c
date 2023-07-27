#include <stdio.h>
#include "lists.h"

/**
* print_list - function with an argument
* @h: const pointer
*
* Description: print all the elements of list_t
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
unsigned int count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
