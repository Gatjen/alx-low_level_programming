#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index) {
    if (*head == NULL)
        return -1;

    dlistint_t *current = *head;

    if (index == 0) {
        *head = current->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(current);
        return 1;
    }

    for (unsigned int i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return -1;

    dlistint_t *next_node = current->next->next;
    free(current->next);
    current->next = next_node;
    if (next_node != NULL)
        next_node->prev = current;

    return 1;
}

// Example usage
int main() {
    // Create a sample linked list: 1 <-> 2 <-> 3 <-> 4 <-> 5
    dlistint_t *node1 = malloc(sizeof(dlistint_t));
    dlistint_t *node2 = malloc(sizeof(dlistint_t));
    dlistint_t *node3 = malloc(sizeof(dlistint_t));
    dlistint_t *node4 = malloc(sizeof(dlistint_t));
    dlistint_t *node5 = malloc(sizeof(dlistint_t));

    node1->n = 1;
    node2->n = 2;
    node3->n = 3;
    node4->n = 4;
    node5->n = 5;

    node1->prev = NULL;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;
    node5->next = NULL;

    dlistint_t *head = node1;

    printf("Before deletion: ");
    dlistint_t *current = head;
    while (current != NULL) {
        printf("%d ", current->n);
        current = current->next;
    }
    printf("\n");

    delete_dnodeint_at_index(&head, 2);

    printf("After deletion: ");
    current = head;
    while (current != NULL) {
        printf("%d ", current->n);
        current = current->next;
    }
    printf("\n");

    return 0;
}
