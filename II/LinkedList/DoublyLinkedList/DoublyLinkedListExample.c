#include <stdio.h>
#include "./liblinkedlist/LinkedList.c"

int main() {
  LinkedList* mylist = create_linkedlist();

  printf("Pushing numbers to linked list\n");
  for (int i = 1; i <= 5; i++) {
    printf("Pushing, %d...\n", i * 10);
    push(i * 10, mylist);
  }

  printf("\nLinked List:\n");
  printf("-> top: %p\n", mylist->head);
  printf("-> top: %d\n", mylist->head->value);
  printf("-> tail: %p\n", mylist->tail);
  printf("-> tail: %d\n", mylist->tail->value);

  printf("Elements:\n");
  Node *nextNode = mylist->head;
  while(nextNode != NULL) {
    printf("%d\n", nextNode->value);
    nextNode = nextNode->next;
  }
  printf("----------------------------\n");
  printf("Popping, %d...\n", pop(mylist));
  printf("Popping, %d...\n", pop(mylist));
  printf("Shifting, %d...\n", shift(mylist));
  printf("Shifting, %d...\n", shift(mylist));

  printf("\nLinked List:\n");
  printf("-> top: %p\n", mylist->head);
  printf("-> top: %d\n", mylist->head->value);
  printf("-> tail: %p\n", mylist->tail);
  printf("-> tail: %d\n", mylist->tail->value);

  printf("Elements:\n");
  nextNode = mylist->head;
  while(nextNode != NULL) {
    printf("%d\n", nextNode->value);
    nextNode = nextNode->next;
  }
}