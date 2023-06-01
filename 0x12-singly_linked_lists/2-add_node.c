#include "lists.h"

/**
  * add_node - function add node at the beginning
  * @head: input list_t
  * @str: input char
  *
  * Return: output list_t
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *head2 = malloc(sizeof(list_t));

	if (!head || !head2)
		return (NULL);
	if (str)
	{
		head2->str = strdup(str);
		if (!head2->str)
		{
			free(head2);
			return (NULL);
		}
		head2->len = _strlen(head2->str);
	}
	head2->next = *head;
	*head = head2;
	return (head2);
}
