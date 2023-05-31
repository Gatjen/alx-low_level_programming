#include <stdlib.h>
#include "your_header_file.h" // Assuming you have a header file defining the dlistint_t structure

void free_dlistint(dlistint_t *head) {
    dlistint_t *temp;

    while (head != NULL) {
        temp = head->next;
        free(head);
        head = temp;
    }
}
