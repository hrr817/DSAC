#include <stdio.h>
#include "./libdoublylinkedlist/DoublyLinkedList.c"

int main() {
  DoublyLinkedList* mylist = create_doubly_linked_list();

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
  // traverse_reverse(mylist);

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