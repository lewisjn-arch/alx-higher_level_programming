#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_t - singly linked list
 * @n: an integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_t
{
        int n;
        struct listint_t *next;
}listint_t;

size_t print_list(const listint_t *h);
listint_t *add_node(listint_t **head, const int n);
void free_list(listint_t *head);
int check_cycle(listint_t *list);
#endif /* LISTS_H */
