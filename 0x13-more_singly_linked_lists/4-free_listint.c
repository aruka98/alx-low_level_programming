#include "lists.h"

/**
  * free_listint - funtion that frees a struct
  * @head: input list
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
