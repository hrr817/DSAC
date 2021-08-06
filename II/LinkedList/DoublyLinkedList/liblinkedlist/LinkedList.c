#include <stdlib.h>
#include "./LinkedList.h"

typedef struct _node {
  int value;
  Node *next;
} Node; 

typedef struct _linked_list {
  Node *head;
  Node *tail;
} LinkedList;

LinkedList* create_linkedlist(){
  LinkedList *ptr = (LinkedList*)malloc(sizeof(LinkedList));
  if(ptr == NULL) {
    // handle errors
  }
  return ptr;
}

int push(int num, LinkedList *ptr) {
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

int pop(LinkedList *ptr) {
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

int shift(LinkedList *ptr) {
  if(ptr->head == NULL) {
    return -1;
  }

  int popped = ptr->head->value;
  Node *temp = ptr->head->next;
  free(ptr->head);
  ptr->head = temp;
  return popped;
}
