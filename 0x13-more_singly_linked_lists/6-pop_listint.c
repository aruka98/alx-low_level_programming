#include "lists.h"

/**
  * pop_listint - function that deletes head node of a list struc
  * @head: input list
  * Return: output int
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}
