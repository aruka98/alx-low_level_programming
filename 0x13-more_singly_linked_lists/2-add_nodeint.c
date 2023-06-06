#include "lists.h"

/**
  * add_nodeint - function adds new node
  * @head: input 1
  * @n: input 2
  * Return: output listint
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!head || !node)
		return (NULL);

	node->next = NULL;
	node->n = n;

	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
