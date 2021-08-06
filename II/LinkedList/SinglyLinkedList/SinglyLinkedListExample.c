#include <stdio.h>
#include "./libsignlylinkedlist/SinglyLinkedList.c"

int main() {
  SinglyLinkedList* mylist = create_singly_linked_list();

  printf("Pushing numbers to linked list\n");
  for (int i = 1; i <= 5; i++) {
    printf("Pushing, %d...\n", i * 10);
    push(i * 10, mylist);
  }

  printf("\nLinked List:\n");
  printf("-> top address: %p\n", mylist->head);
  printf("-> top: %d\n", mylist->head->value);
  printf("-> tail address: %p\n", mylist->tail);
  printf("-> tail: %d\n", mylist->tail->value);

  printf("Elements:\n");
  traverse(mylist);
  printf("----------------------------\n");
  printf("Popping, %d...\n", pop(mylist));
  printf("Popping, %d...\n", pop(mylist));
  printf("Shifting, %d...\n", shift(mylist));
  printf("Shifting, %d...\n", shift(mylist));

  printf("\nLinked List:\n");
  printf("-> top address: %p\n", mylist->head);
  printf("-> top: %d\n", mylist->head->value);
  printf("-> tail address: %p\n", mylist->tail);
  printf("-> tail: %d\n", mylist->tail->value);

  printf("Elements:\n");
  traverse(mylist);
}