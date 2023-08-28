#include "lists.h"
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


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
