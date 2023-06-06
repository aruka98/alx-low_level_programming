#include "lists.h"

/**
  * insert_nodeint_at_index - function inserts new node
  * @head: input 1
  * @idx: input 2
  * @n: input 3
  * Return: output listint
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node_2, *node;

	*node = *head;

	node_2 = malloc(sizeof(listint_t));
	if (!node_2 || !head)
		return (NULL);

	node_2->n = n;
	node_2->next = NULL;

	if (idx == 0)
	{
		node_2->next = *head;
		*head = node_2;
		return (node_2);
	}

	for (i = 0; node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			node_2->next = node->next;
			node->next = node_2;
			return (node_2);
		}
		else
			node = node->next;
	}

	return (NULL);
}
