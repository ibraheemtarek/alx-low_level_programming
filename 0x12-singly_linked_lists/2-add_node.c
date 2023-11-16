#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Nnode;
	size_t nchar;

	Nnode = malloc(sizeof(list_t));
	if (Nnode == NULL)
		return (NULL);
	Nnode->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	Nnode->next = *head;
	Nnode->len = nchar;
	*head = Nnode;
	return (*head);
}
