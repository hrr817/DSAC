#include <stdio.h>
#include "./liblinkedlist/LinkedList.c"

int main() {
  LinkedList* mylist = create_linkedlist();
  push(10, mylist);
  push(20, mylist);
  push(30, mylist);
  push(40, mylist);

  printf("Linked List:\n");
  printf("-> top: %p\n", mylist->head->next);
  printf("-> top: %d\n", mylist->head->value);
  printf("-> tail: %p\n", mylist->tail->next);
  printf("-> tail: %d\n", mylist->tail->value);


  printf("Elements:\n");
  Node *nextNode = mylist->head;
  while(nextNode != NULL) {
    printf("%d\n", nextNode->value);
    nextNode = nextNode->next;
  }

  printf("----------------------------\n");

  printf("Linked List:\n");
  printf("-> top: %p\n", mylist->head->next);
  printf("-> top: %d\n", mylist->head->value);
  printf("-> tail: %p\n", mylist->tail->next);
  printf("-> tail: %d\n", mylist->tail->value);
}