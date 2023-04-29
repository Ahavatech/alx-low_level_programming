#include "lists.h"
/**
 * sum_listint - sums all data(n) elements in node list
 * @head: head node pointer
 * Description: sums all data(n) elements in node list
 * Return: sum
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

	while (i <= idx)
	{
		if (*head == NULL)
			return (NULL);
		temp = (*head);
		if (i != idx)
		{
			temp = temp->next;
			*head = temp;
		}
		else if (i == idx)
		{
			new_node->n = n;
			if (idx == 0)
			{
				new_node->next = *head;
				*head = new_node;
				break;
			}
			new_node = temp->next;
			(*head)->next = new_node;
		}
		i++;
	}
	return(new_node);
}
