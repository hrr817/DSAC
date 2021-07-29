#include <stdio.h>
#include "./libqueue/intqueue.c"

int main() {
  IntQueue *myqueue = create_queue(5);

  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
  printf("-> is Full: %d\n", is_full(myqueue));
  printf("-> is Empty: %d\n", is_empty(myqueue));
  printf("-> Peek: %d\n", peek(myqueue));

  printf("---------------------------------\n");
  printf("Enqueueing 5 items...\n");
  for (int i = 1; i <=5; i++) {
    enqueue(i * 11, myqueue);
  }
  printf("---------------------------------\n");

  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
  printf("-> is Full: %d\n", is_full(myqueue));
  printf("-> is Empty: %d\n", is_empty(myqueue));
  printf("-> Peek: %d\n", peek(myqueue));
  printf("Elements: \n");
  for (int i = 0; i < myqueue->last; i++) {
    printf("%d\n", myqueue->elements[i]);
  }


  printf("---------------------------------\n");
  printf("Dequeueing 2 items...\n");
  for (int i = 0; i < 2; i++) {
    printf("-> %d\n", dequeue(myqueue));
  }
  printf("---------------------------------\n");

  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
  printf("-> is Full: %d\n", is_full(myqueue));
  printf("-> is Empty: %d\n", is_empty(myqueue));
  printf("-> Peek: %d\n", peek(myqueue));
  printf("Elements: \n");
  for (int i = 0; i < myqueue->last; i++) {
    printf("%d\n", myqueue->elements[i]);
  }

}