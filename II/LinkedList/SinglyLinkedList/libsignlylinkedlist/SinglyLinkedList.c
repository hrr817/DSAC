#include <stdlib.h>
#include <stdio.h>
#include "./SinglyLinkedList.h"

typedef struct _node {
  int value;
  Node *next;
} Node; 

typedef struct _singly_linked_list {
  Node *head;
  Node *tail;
} SinglyLinkedList;

SinglyLinkedList* create_singly_linked_list(){
  SinglyLinkedList *ptr = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
  if(ptr == NULL) {
    // handle errors
  }
  return ptr;
}

int push(int num, SinglyLinkedList *ptr) {
  Node *newNode = (Node*)malloc(sizeof(Node));
  newNode->value = num;

  if(ptr->head == NULL) {
    ptr->head = newNode;
    ptr->tail = newNode;
  } else {
    ptr->tail->next = newNode;
    ptr->tail = newNode;
  }

  return 0;
}

int pop(SinglyLinkedList *ptr) {
  if(ptr->head == NULL) {
    return -1;
  }

  Node *secondLastNode = NULL;
  Node *lastNode = ptr->head;

  while(lastNode->next != NULL) {
    secondLastNode = lastNode;
    lastNode = lastNode->next;
  }

  int popped = lastNode->value;
  free(lastNode);
  secondLastNode->next = NULL;
  ptr->tail = secondLastNode;
  return popped;
}

int shift(SinglyLinkedList *ptr) {
  if(ptr->head == NULL) {
    return -1;
  }

  int popped = ptr->head->value;
  Node *temp = ptr->head->next;
  free(ptr->head);
  ptr->head = temp;
  return popped;
}

void traverse(SinglyLinkedList *ptr) {
  Node *node = ptr->head;

  while(node != NULL) {
    printf("----------------------------------------\n");
    printf("Address: %p\n", node);
    printf("Value: %d\n", node->value);
    printf("Next: %p\n", node->next);
    printf("----------------------------------------\n");
    node = node->next;
  }
}