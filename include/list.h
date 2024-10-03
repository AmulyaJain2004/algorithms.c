#ifndef LIST_H
#define LIST_H

typedef struct Node {
    void* data;
    struct Node* next;
} Node;

Node* create_node (void* data);
void insert_at_beginning (Node** head, void* data);
void insert_at_end (Node** head, void* data);
void delete_node (Node** head, void* data, int (*compare)(void*, void*));
Node *search(Node* head, void* data, int (*compare)(void*, void*));
void print_list(Node* head, void (*print_data)(void*))

#endif