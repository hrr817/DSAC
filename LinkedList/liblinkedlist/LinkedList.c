#include <stdlib.h>
#include "./LinkedList.h"

typedef struct _node {
  int value;
  Node *next;
} Node; 

typedef struct _linked_list {
  int start;
  int end;
} LinkedList;

LinkedList* create_linkedlist(){
  LinkedList *ptr = (LinkedList*)malloc(sizeof(LinkedList));
  ptr->start = -1;
  ptr->end = -1;

  return ptr;
}

int push(int num, LinkedList *ptr) {
 return 0;
}
