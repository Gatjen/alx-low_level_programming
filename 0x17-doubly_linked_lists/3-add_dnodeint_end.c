#include <stdlib.h>
#include "your_header_file.h" // Replace with the appropriate header file

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n) {
    dlistint_t *new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL; // Failed to allocate memory for new node
    }

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) {
        // If the list is empty, make the new node the head
        new_node->prev = NULL;
        *head = new_node;
    } else {
        dlistint_t *current = *head;

        // Traverse to the end of the list
        while (current->next != NULL) {
            current = current->next;
        }

        // Attach the new node at the end
        current->next = new_node;
        new_node->prev = current;
    }

    return new_node;
}
