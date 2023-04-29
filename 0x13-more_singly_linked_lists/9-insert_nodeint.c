#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: A pointer to the head of the linked list
 * @idx: The index of the list where the new node should be added
 * @n: The value to be added to the new node
 *
 * Return: A pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (i < idx)
	{
		if (*head == NULL)
			return (NULL);

		temp = *head;

		if (i != idx - 1)
			*head = temp->next;

		i++;
	}

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}

