#include <stdlib.h>

/**
 * Definition for doubly-linked list.
 * struct dlistint_s {
 *     int n;
 *     struct dlistint_s *prev;
 *     struct dlistint_s *next;
 * };
 * typedef struct dlistint_s dlistint_t;
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    unsigned int count = 0;  // Variable to keep track of the current index
    dlistint_t *current = head;

    while (current != NULL) {
        if (count == index) {
            return current;  // Found the node at the desired index
        }
        current = current->next;
        count++;
    }

    return NULL;  // Node at the index does not exist
}
