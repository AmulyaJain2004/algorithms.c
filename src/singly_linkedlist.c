#include <stdio.h>
#include <stdlib.h>
#include "singly_linkedlist.h"

LinkedList* create_list() {
    LinkedList* list = (LinkedList*)malloc(sizeof(LinkedList));
    list->head = NULL;
    return list;
}

void append(LinkedList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    if (list->head == NULL) {
        list->head = new_node;
    } else {
        Node* temp = list->head;
        while (temp->next) temp = temp->next;
        temp->next = new_node;
    }
}

void display_list(LinkedList* list) {
    Node* temp = list->head;
    while (temp) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void free_list(LinkedList* list) {
    Node* temp = list->head;
    while (temp) {
        Node* next = temp->next;
        free(temp);
        temp = next;
    }
    free(list);
}
