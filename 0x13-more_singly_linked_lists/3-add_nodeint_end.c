#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of listint_t list
 * @head: a pointer to the addres of the head of listint_t list
 * @n: the integer for the new node
 *
 * Return: NULL if function fails
 * otherwise address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if(*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
