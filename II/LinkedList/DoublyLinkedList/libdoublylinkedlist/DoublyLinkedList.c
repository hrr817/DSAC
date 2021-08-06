#include <stdlib.h>
#include <stdio.h>
#include "./DoublyLinkedList.h"

typedef struct _node {
  int value;
  Node *prev;
  Node *next;
} Node; 

typedef struct _doubly_linked_list {
  Node *head;
  Node *tail;
} DoublyLinkedList;

DoublyLinkedList* create_doubly_linked_list(){
  DoublyLinkedList *ptr = (DoublyLinkedList*)malloc(sizeof(DoublyLinkedList));
  if(ptr == NULL) {
    // handle errors
  }
  return ptr;
}

int push(int num, DoublyLinkedList *ptr) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->value = num;

  if(ptr->head == NULL) {
    ptr->head = newNode;
    ptr->tail = newNode;
  } else {
    ptr->tail->next = newNode;
    newNode->prev = ptr->tail;
    ptr->tail = newNode;
  }

  return 0;
}

int pop(DoublyLinkedList *ptr) {
  if(ptr->head == NULL) {
    return -1;
  }

  int popped = ptr->tail->value;

  if(ptr->tail->prev == NULL) {
    ptr->head = NULL;
    ptr->tail = NULL;
  } else {
    ptr->tail = ptr->tail->prev;
    ptr->tail->next = NULL;
  }

  return popped;
}

int shift(DoublyLinkedList *ptr) {
  if(ptr->head == NULL) {
    return -1;
  }

  int popped = ptr->head->value;
  Node *temp = ptr->head->next;
  free(ptr->head);
  ptr->head = temp;
  ptr->head->prev = NULL;
  return popped;
}

void traverse(DoublyLinkedList *ptr) {
  Node *node = ptr->head;

  while(node != NULL) {
    printf("----------------------------------------\n");
    printf("Address: %p\n", node);
    printf("Value: %d\n", node->value);
    printf("Next: %p\n", node->next);
    printf("Prev: %p\n", node->prev);
    printf("----------------------------------------\n");
    node = node->next;
  }
}

void traverse_reverse(DoublyLinkedList *ptr) {
  Node *node = ptr->tail;

  while(node != NULL) {
    printf("----------------------------------------\n");
    printf("Address: %p\n", node);
    printf("Value: %d\n", node->value);
    printf("Next: %p\n", node->next);
    printf("Prev: %p\n", node->prev);
    printf("----------------------------------------\n");
    node = node->prev;
  }
}
