#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the linked list to be freed
 *
 */
void free_listint(listint_t *head)

{
	if (!head)
	return;

	free_listint(head->next);
	free(head);
}
