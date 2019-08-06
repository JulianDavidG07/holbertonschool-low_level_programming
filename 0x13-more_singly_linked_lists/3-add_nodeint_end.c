#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t list
  * @head: double pointer to the list.
  * enables us to change the address of the beginning of the list.
  * @n: value to add to the n element of list.
  * Return: address of the new element or NULL
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *copy_head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}
	copy_head = *head;
	while (copy_head->next)
		copy_head = copy_head->next;
	new_node->next = copy_head->next;
	copy_head->next = new_node;
	return (new_node);
}
