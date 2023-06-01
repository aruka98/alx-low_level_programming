#include "lists.h"

/**
  * add_node_end - funct add node at the end of list
  * @head: input list_t
  * @str: input pointer char
  *
  * Return: list_t
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *node_2 = malloc(sizeof(list_t));

	if (!head || !node_2)
		return (NULL);
	if (str)
	{
		node_2->str = strdup(str);
		if (!node_2->str)
		{
			free(node_2);
			return (NULL);
		}
		node_2->len = _strlen(node_2->str);
	}

	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = node_2;
	}
	else
		*head = node_2;
	return (node_2);
}
