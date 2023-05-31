#include <stdlib.h>

/* Definition of a doubly linked list node */
typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

dlistint_t *add_dnodeint(dlistint_t **head, const int n) {
    /* Create a new node */
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;  /* Return NULL if memory allocation fails */
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    /* Update the previous pointer of the old head */
    if (*head != NULL) {
        (*head)->prev = new_node;
    }

    /* Update the head pointer */
    *head = new_node;

    return new_node;
}
