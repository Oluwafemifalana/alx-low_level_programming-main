#include "list.h"
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: head of the node
 * @str: string to be duplicated
 * Return: new header
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
int i;
list_t *t;
	list_t *new;
	unsigned int len = 0;

if (head == NULL || str == NULL)
return (NULL);
	while (str[len])
		len++;

t = malloc(sizeof(list_t));
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

if (t == NULL)
return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

for (i = 0; str[i] != 0; i++)
{
}
i++;
t->str = malloc(i);
if (t->str == NULL)
{
free(t);
return (NULL);
}

t->str = strdup(str);
t->len = i - 1;
t->next = *head;
*head = t;

return (t);
	return (*head);
}
