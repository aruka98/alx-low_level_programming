#include "lists.h"

/**
  * delete_nodeint_at_index - function deletes node in index
  * @head: input 1
  * @index: input 2
  * Return: output int
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *node_1;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	node = *head;

	while (node)
	{
		if (i == index)
		{
			node_1->next = node->next;
			free(node);
			return (1);
		}
		i++;
		node_1 = node;
		node = node->next;
	}
	return (-1);
}
