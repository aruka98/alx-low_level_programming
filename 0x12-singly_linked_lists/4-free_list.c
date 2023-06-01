#include "lists.h"

/**
  * free_list - function to free memory of list
  * @head: input pointer list_t
*/

void free_list(list_t *head)
{
	list_t *node, *node_2;

	if (!head)
		return;

	node = head;
	while (node)
	{
		node_2 = node->next;
		free(node->str);
		free(node);
		node = node_2;
	}
}
