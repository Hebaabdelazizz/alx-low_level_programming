#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at index index
 * of a listint_t linked list.
 * @head: singly linked list
 * @index:  is the index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head, *prev;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current->next != NULL)
	{
		if (i == (index - 1))
		{
			prev = current->next;
			current->next = prev->next;
			free(prev);
			return (1);
		}

		i++;
		current = current->next;
	}

	return (-1);
}
