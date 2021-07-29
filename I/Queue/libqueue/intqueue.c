#include <stdlib.h>
#include "./intqueue.h"


typedef struct _int_queue {
  int last;
  int size;
  int* elements;
} IntQueue;

IntQueue* create_queue(int size){
  IntQueue *ptr = (IntQueue*)malloc(sizeof(IntQueue));
  ptr->last = -1;
  ptr->size = size;
  ptr->elements = (int*)malloc(ptr->size * sizeof(int));

  if(ptr->elements == NULL) {
    ptr->size = -1;
  }

  return ptr;
}

int enqueue(int num, IntQueue *ptr) {
  if(ptr->last == ptr->size) {
    return 1;
  }

  if(ptr->last == -1) {
    ptr->last = 0;
  }
  ptr->elements[ptr->last++] = num;
  return 0;
}

int dequeue(IntQueue *ptr) {
  if(ptr->last == -1) {
    return -1;
  }

  int ele = ptr->elements[0];

  // in case of one element
  if(ptr->last == 1) {
    ptr->elements[0] = 0;
    ptr->last = -1;
    return ele;
  }

  // when number of elements > 1 
  for (int i = 0; i < ptr->last - 1; i++) {
    ptr->elements[i] = ptr->elements[i + 1];
  }

  ptr->last--;
  return ele;
}

int is_empty(IntQueue *ptr){
  if(ptr->last == -1) {
    return 1;
  }
  
  return 0;
}

int is_full(IntQueue *ptr) {
  if(ptr->last == ptr->size) {
    return 1;
  }

  return 0;
}

int peek(IntQueue *ptr) {
  if(ptr->last == -1) {
    return -1;
  }

  return ptr->elements[0];
}