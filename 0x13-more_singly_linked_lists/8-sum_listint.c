#include "lists.h"

/**
  * sum_listint - function sum all the data
  * @head: input listint
  * Return: output int
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
