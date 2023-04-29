#include "lists.h"
/**
 * sum_listint - sums all data(n) elements in node list
 * @head: head node pointer
 * Description: sums all data(n) elements in node list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;

	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;
	while (head != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		head = temp;
	}

	return (sum);
}
