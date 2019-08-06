#include "lists.h"

/**
  * listint_len - calculates number of elements in a linked list
  * @h: pointer to list
  * Return: number of elements in a linked list
  */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
