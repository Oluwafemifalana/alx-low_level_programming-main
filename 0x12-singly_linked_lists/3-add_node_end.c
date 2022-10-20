#include "list.h"

#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head of the node
 * @str: string to be duplicated
 * Return: new header
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *t;

if (head == NULL || str == NULL)
return (NULL);
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

t = malloc(sizeof(list_t));

if (t == NULL)
return (NULL);

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
t->next = NULL;

for (; *head;)
list_t *add_node_end(list_t **head, const char *str)
{
head = &(*head)->next;
}
*head = t;

return (t);
	list_t *temp, *temp2;
	unsigned int length = 0;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	while (str[length])
		length++;
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	temp2 = *head;
	while (temp2->next)
		temp2 = temp2->next;
	temp2->next = temp;
	return (temp);
}
