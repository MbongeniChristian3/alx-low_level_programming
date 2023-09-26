#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of listint_t list
 * @head: A pointer to the address of the headof the listint_t list
 * @n: the integer for the new node to contain
 * Return: NULL if the function fails
 * otherwise the addres of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
