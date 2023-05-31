#include <stddef.h> // for NULL

typedef struct dlistint_s {
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

int sum_dlistint(dlistint_t *head) {
    int sum = 0;

    // Traverse the linked list and add up the values
    while (head != NULL) {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
