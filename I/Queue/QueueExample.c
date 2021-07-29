#include <stdio.h>
#include "./libqueue/intqueue.c"

int main() {
  IntQueue *myqueue = create_queue(20);

  printf("Queue:\n");
  printf("-> Size: %d\n", myqueue->size);
  printf("-> Last: %d\n", myqueue->last);
}