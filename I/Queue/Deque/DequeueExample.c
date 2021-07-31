#include <stdio.h>
#include "./libdequeue/Dequeue.c"

void printQueue(Dequeue *ptr);

int main() {
  Dequeue *myqueue = create_dequeue(5);
  
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  // printf("-> is Full: %d\n", dq_is_full(myqueue));
  // printf("-> is Empty: %d\n", dq_is_empty(myqueue));
  // printf("-> Peek: %d\n", cir_peek(myqueue));

  printf("---------------------------------\n");
  printf("Enqueueing 5 items...\n");
  dq_enqueue_start(11, myqueue);
  dq_enqueue_start(11, myqueue);
  dq_enqueue_start(11, myqueue);
  // for (int i = 1; i <= 5; i++) {
  // }
  printf("---------------------------------\n");

  printf("Elements: \n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  // printf("-> is Full: %d\n", cir_is_full(myqueue));
  // printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  // printf("-> Peek: %d\n", cir_peek(myqueue));
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);
}