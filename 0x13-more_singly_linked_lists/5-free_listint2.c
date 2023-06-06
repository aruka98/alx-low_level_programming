#include "lists.h"

/**
  * free_listint2 - function ot free structure
  * @head: input list pointer
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *nod;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		nod = node;
		node = node->next;
		free(nod);
	}
	*head = NULL;
}
