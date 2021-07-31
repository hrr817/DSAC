#include <stdlib.h>
#include <stdio.h>
typedef struct _dequeue {
  int start;
  int end;
  int size;
  int* elements;
} Dequeue;

Dequeue* create_dequeue(int size) {
  Dequeue *ptr = (Dequeue*)malloc(sizeof(Dequeue));
  ptr->size = size;
  ptr->start = -1;
  ptr->end = -1;
  ptr->elements = (int*)malloc(sizeof(int) * ptr->size);

  if(ptr->elements == NULL) {
    ptr->size = 0;
  }

  return ptr;
}

int dq_is_full(Dequeue *ptr) {
  if(ptr->start == ((ptr->end + 1) % ptr->size)) {
    return 1;
  }

  return 0;
}

int dq_is_empty(Dequeue *ptr) {
  if(ptr->start == -1) {
    return 1;
  }

  return 0;
}

int dq_enqueue_start(int num, Dequeue *ptr) {
  if(dq_is_full(ptr) || ptr->size == 0){
    return 1;
  }

  if(ptr->start == -1 && ptr->end == -1) {
    ptr->start = 1;
    ptr->end = 0;
  }

  ptr->start = (ptr->start - 1) % ptr->size;
  printf("%d\n", (ptr->start - 1));

  ptr->elements[ptr->start] = num;
  return 0;
}

int dq_enqueue_end(int num, Dequeue *ptr) {
  if(dq_is_full(ptr) || ptr->size == 0){
    return 1;
  }

  if(ptr->start == -1 && ptr->end == -1) {
    ptr->start = 0;
    ptr->end = 0;
  }

  ptr->end = (ptr->end + 1) % ptr->size;
  ptr->elements[ptr->end] = num;
  return 0;
}

int dq_dequeue_start(Dequeue *ptr) {
  if(dq_is_empty(ptr)) {
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

int dq_dequeue_end(Dequeue *ptr) {
  if(dq_is_empty(ptr)) {
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

int dq_get_start(Dequeue *ptr) {
  if(ptr->size == 0 || ptr->start == -1) {
    return 1;
  }

  return ptr->elements[ptr->start];
}

int dq_get_end(Dequeue *ptr) {
  if(ptr->size == 0 || ptr->start == -1) {
    return 1;
  }

  return ptr->elements[ptr->start];
}