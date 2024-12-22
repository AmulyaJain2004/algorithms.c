#include "singly_linkedlist.h"

int main() {
    LinkedList* list = create_list();
    append(list, 10);
    append(list, 20);
    append(list, 30);

    printf("Linked List: ");
    display_list(list);

    free_list(list);
    return 0;
}
