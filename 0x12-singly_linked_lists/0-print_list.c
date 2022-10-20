#include "list.h"
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: header
 * Return: count being i
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
int i;
	size_t n = 0;

if (h == NULL)
return (0);
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}

for (i = 0; h; i++)
{
if (h->str != NULL)
{
printf("[%u] ", h->len);
}
else
{
printf("[%u] ", 0);
}
if (h->str != NULL)
{
printf("%s\n", h->str);
}
else
{
printf("%s\n", "(nil)");
}
h = h->next;
}
return (i);
	return (n);
}
