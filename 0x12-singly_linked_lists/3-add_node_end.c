#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *Node, *tnode;
	size_t nchar;

	Node = malloc(sizeof(list_t));
	if (Node == NULL)
		return (NULL);

	Node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	Node->len = nchar;
	Node->next = NULL;
	tnode = *head;

	if (tnode == NULL)
	{
		*head = Node;
	}
	else
	{
		while (tnode->next != NULL)
			tnode = tnode->next;
		tnode->next = Node;
	}

	return (*head);
}
