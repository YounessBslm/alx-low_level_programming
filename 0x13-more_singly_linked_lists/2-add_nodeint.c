#include "lists.h"

/**
* add_nodeint - add a new node at the beginning of linked list
* @head: pointer to the first node
* @n: data to insert in a new node
* Return: pointer to a new node, or NULL
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = *head;
*head = new;

return (new);
}