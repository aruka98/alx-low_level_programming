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
	unsigned int i = 0;
	listint_t *node, *node_2 = malloc(sizeof(listint_t));

	if (!head || !node_2)
		return (NULL);

	node_2->n = n;
	node_2->next = NULL;

	if (!idx)
	{
		node_2->next = *head;
		*head = node_2;
		return (node_2);
	}

	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			node_2->next = node->next;
			node->next = node_2;
			return (node_2);
		}
		i++;
		node = node->next;
	}
	free(node_2);
	return (NULL);
}
