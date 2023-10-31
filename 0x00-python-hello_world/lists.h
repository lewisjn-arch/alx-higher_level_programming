#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct int_list - singly linked list
 * @n: an integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct int_list
{
        int n;
        struct int_list *next;
}int_list;

size_t print_list(const int_list *h);
int_list *add_node(int_list **head, const int n);
void free_list(int_list *head);
int cycle(int_list *list);
#endif /* LISTS_H */
