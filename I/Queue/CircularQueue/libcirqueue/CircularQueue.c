#include <stdlib.h>
typedef struct _cir_queue {
  int start;
  int end;
  int size;
  int* elements;
} CircularQueue;

CircularQueue* create_cir_queue(int size) {
  CircularQueue *ptr = (CircularQueue*)malloc(sizeof(CircularQueue));
  ptr->size = size;
  ptr->start = -1;
  ptr->end = -1;
  ptr->elements = (int*)malloc(sizeof(int) * ptr->size);

  if(ptr->elements == NULL) {
    ptr->size = 0;
  }

  return ptr;
}

int cir_is_full(CircularQueue *ptr) {
  if(ptr->start == ((ptr->end + 1) % ptr->size)) {
    return 1;
  }

  return 0;
}

int cir_is_empty(CircularQueue *ptr) {
  if(ptr->start == -1) {
    return 1;
  }

  return 0;
}

int cir_enqueue(int num, CircularQueue *ptr) {
  if(cir_is_full(ptr) || ptr->size == 0){
    return 1;
  }

  if(ptr->start == -1) {
    ptr->start = 0;
  }

  ptr->end = (ptr->end + 1) % ptr->size;
  ptr->elements[ptr->end] = num;
  return 0;
}

int cir_dequeue(CircularQueue *ptr) {
  if(cir_is_empty(ptr)) {
    return 1;
  }

  int temp = ptr->elements[ptr->start]; // save value to return
  ptr->elements[ptr->start] = 0; // remove value

  if(ptr->start == ptr->end) { // only one item reset queue
    ptr->start = -1;
    ptr->end = -1;
  } else {
    ptr->start = (ptr->start + 1) % ptr->size; // move start index one step
  }

  return temp;
}

int cir_peek(CircularQueue *ptr) {
  if(ptr->size == 0 || ptr->start == -1) {
    return 1;
  }

  return ptr->elements[ptr->start];
}