#include "lists.h"

/**
  * add_nodeint_end - function adds new node at the end
  * @head: input list struct
  * @n: input int
  * Return: listint_t
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *node_2 = malloc(sizeof(listint_t));

	if (!head || !node_2)
		return (NULL);

	node_2->next = NULL;
	node_2->n = n;

	if (!*head)
		*head = node_2;
	else
	{
		node = *head;
		while (node->next)
			node = node->next;
		node->next = node_2;
	}
	return (node_2);
}
