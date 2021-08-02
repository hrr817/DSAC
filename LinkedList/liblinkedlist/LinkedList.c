#include <stdlib.h>
#include <stdio.h>
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
