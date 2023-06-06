#include "lists.h"

/**
  * print_listint - function prints all elements of list
  * @h: inout listint structre
  * Return: output size_t
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
