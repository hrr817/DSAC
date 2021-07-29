#include <bits/pthreadtypes.h>
#include <stdio.h>
#include "./libcirqueue/CircularQueue.c"

void printQueue(CircularQueue *ptr);

int main() {
  CircularQueue *myqueue = create_cir_queue(5);
  
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", cir_is_full(myqueue));
  printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  printf("-> Peek: %d\n", cir_peek(myqueue));

  printf("---------------------------------\n");
  printf("Enqueueing 5 items...\n");
  for (int i = 1; i <= 5; i++) {
    cir_enqueue(i * 11, myqueue);
  }
  printf("---------------------------------\n");

  printf("Elements: \n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", cir_is_full(myqueue));
  printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  printf("-> Peek: %d\n", cir_peek(myqueue));
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  printf("---------------------------------\n");
  printf("Dequeueing 2 items...\n");
  for (int i = 1; i <= 2; i++) {
    cir_dequeue(myqueue);
  }
  printf("---------------------------------\n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", cir_is_full(myqueue));
  printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  printf("-> Peek: %d\n", cir_peek(myqueue));
  printf("Elements: \n");
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  printf("---------------------------------\n");
  printf("Enqueueing 1 item...\n");
  cir_enqueue(90, myqueue);
  printf("---------------------------------\n");
  printf("Elements: \n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", cir_is_full(myqueue));
  printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  printf("-> Peek: %d\n", cir_peek(myqueue));
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  printf("---------------------------------\n");
  printf("Dequeueing 3 items...\n");
  for (int i = 1; i <= 3; i++) {
    cir_dequeue(myqueue);
  }
  printf("---------------------------------\n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", cir_is_full(myqueue));
  printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  printf("-> Peek: %d\n", cir_peek(myqueue));
  printf("Elements: \n");
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);

  printf("---------------------------------\n");
  printf("Dequeueing 1 item...\n");
  cir_dequeue(myqueue);
  printf("---------------------------------\n");
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Start: %d\n", myqueue->start);
  printf("-> End: %d\n", myqueue->end);
  printf("-> is Full: %d\n", cir_is_full(myqueue));
  printf("-> is Empty: %d\n", cir_is_empty(myqueue));
  printf("-> Peek: %d\n", cir_peek(myqueue));
  printf("Elements: \n");
  printf("%d\n", myqueue->elements[0]);
  printf("%d\n", myqueue->elements[1]);
  printf("%d\n", myqueue->elements[2]);
  printf("%d\n", myqueue->elements[3]);
  printf("%d\n", myqueue->elements[4]);
}

void printQueue(CircularQueue *ptr) {
  for (int i = ptr->start; i <= ptr->end; i = ((i + 1) % ptr->size)) {
      printf("%d\n", i);
      // printf("%d\n", myqueue->elements[i]);
  }
}