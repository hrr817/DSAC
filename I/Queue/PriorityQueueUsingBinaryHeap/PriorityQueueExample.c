#include <stdio.h>
#include "./libpqueue/PriorityQueue.c"

int main() {
  PriorityQueue *myqueue = create_pq(5);
  
  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
  printf("-> is Full: %d\n", pq_is_full(myqueue));
  printf("-> is Empty: %d\n", pq_is_empty(myqueue));
  printf("-> Peek: %d\n", pq_peek(myqueue));

  printf("---------------------------------\n");
  printf("Enqueueing 5 items...\n");
  pq_enqueue(3, 3, myqueue);
  pq_enqueue(5, 5, myqueue);
  pq_enqueue(1, 1, myqueue);
  pq_enqueue(2, 2, myqueue);
  pq_enqueue(4, 4, myqueue);
  printf("---------------------------------\n");

  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
  printf("-> is Full: %d\n", pq_is_full(myqueue));
  printf("-> is Empty: %d\n", pq_is_empty(myqueue));
  printf("-> Peek: %d\n", pq_peek(myqueue));
  printf("Elements: \n");
  for (int i = 0; i < myqueue->last; i++) {
    printf("%d\n", myqueue->nodes[i].v);
  }

  printf("---------------------------------\n");
  printf("Dequeueing 4 items...\n");
  for (int i = 0; i < 4; i++) {
    printf("%d\n", pq_dequeue(myqueue));
    // printf("********************************* \n");
    // printf("Elements: \n");
    // for (int i = 0; i < myqueue->last; i++) {
    //   printf("%d\n", myqueue->nodes[i].v);
    // }
  }
  printf("---------------------------------\n");

  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
  printf("-> is Full: %d\n", pq_is_full(myqueue));
  printf("-> is Empty: %d\n", pq_is_empty(myqueue));
  printf("-> Peek: %d\n", pq_peek(myqueue));
  printf("Elements: \n");
  for (int i = 0; i < myqueue->last; i++) {
    printf("%d\n", myqueue->nodes[i].v);
  }
}