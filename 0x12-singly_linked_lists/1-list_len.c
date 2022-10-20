#include "list.h"
#include "lists.h"

/**
 * list_len - number of elements on a list
 * @h: header
 * Return: int i
 */
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *h)
{
int i;
	const list_t *temp;
	unsigned int counter = 0;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
	temp = h;
	while (temp)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
