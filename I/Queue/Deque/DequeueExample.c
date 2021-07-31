#include <stdio.h>
#include "./libdequeue/Dequeue.c"

void printQueue(Dequeue *ptr);

int main() {
  Dequeue *myqueue = create_dequeue(5);

  printf("%d\n", -1 % 5);
  
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", dq_is_full(myqueue));
  printf("-> is Empty: %d\n", dq_is_empty(myqueue));
  // printf("-> Peek: %d\n", cir_peek(myqueue));

  printf("---------------------------------\n");
  printf("Enqueueing 5 items...\n");
  printf("Enqueueing 11 at start\n");
  dq_enqueue_start(11, myqueue);
  printf("Enqueueing 22 at end\n");
  dq_enqueue_end(22, myqueue);
  printf("Enqueueing 33 at start\n");
  dq_enqueue_start(33, myqueue);
  printf("Enqueueing 44 at start\n");
  dq_enqueue_start(44, myqueue);
  printf("Enqueueing 99 at end\n");
  dq_enqueue_end(99, myqueue);
  printf("---------------------------------\n");

  // s           e
  // 44 33 11 22 99

  printf("Elements: \n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", dq_is_full(myqueue));
  printf("-> is Empty: %d\n", dq_is_empty(myqueue));
  printf("-> Peek start: %d\n", dq_get_start(myqueue));
  printf("-> Peek end: %d\n", dq_get_end(myqueue));
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  printf("---------------------------------\n");
  printf("Dequeueing 2 items...\n");
  printf("Dequeueing start: %d\n", dq_dequeue_start(myqueue));
  printf("Dequeueing end: %d\n", dq_dequeue_end(myqueue));
  printf("---------------------------------\n");

  printf("Elements: \n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", dq_is_full(myqueue));
  printf("-> is Empty: %d\n", dq_is_empty(myqueue));
  printf("-> Peek start: %d\n", dq_get_start(myqueue));
  printf("-> Peek end: %d\n", dq_get_end(myqueue));
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  printf("---------------------------------\n");
  printf("Dequeueing 2 items...\n");
  printf("Dequeueing start: %d\n", dq_dequeue_start(myqueue));
  printf("Dequeueing end: %d\n", dq_dequeue_end(myqueue));
  printf("---------------------------------\n");

  //    s      e  
  // 44 33 11 22 99

  printf("Elements: \n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", dq_is_full(myqueue));
  printf("-> is Empty: %d\n", dq_is_empty(myqueue));
  printf("-> Peek start: %d\n", dq_get_start(myqueue));
  printf("-> Peek end: %d\n", dq_get_end(myqueue));
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  //       se  
  // 44 33 11 22 99
}