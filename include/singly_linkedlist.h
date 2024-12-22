#ifndef LIST_H
#define LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct LinkedList {
    Node* head;
} LinkedList;

LinkedList* create_list();
void append(LinkedList* list, int data);
void display_list(LinkedList* list);
void free_list(LinkedList* list);

#endif
