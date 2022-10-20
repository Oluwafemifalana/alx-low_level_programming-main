#include "list.h"
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Free a list
 * @head: start of the list
 * Return: void
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *t;
	list_t *tmp;

if (head == NULL)
return;

while (head != NULL)
{
t = head;
head = head->next;
free(t->str);
free(t);
}
	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
