#include "lists.h"
#include <stdio.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *return numbers of element
 */



size_t listint_len(const listint_t *h)

{
	size_t count = 0;


	while (h != NULL)

	{

		h = h->next;

		count++;

	}

	return (count);
}

