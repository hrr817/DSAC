#include <stdlib.h>
#include <stdio.h>
#include "./PriorityQueue.h"
typedef struct _node {
  int v;
  int p;
} Node;

typedef struct _pqueue {
  int size;
  int last;
  Node* nodes;
} PriorityQueue;


PriorityQueue* create_pq(int size) {
  PriorityQueue* ptr = (PriorityQueue*)malloc(sizeof(PriorityQueue));
  ptr->size = size;
  ptr->last = -1;
  ptr->nodes = (Node*)malloc(size * sizeof(Node));

  if(ptr->nodes == NULL) {
    ptr->size = -1;
  }

  return ptr;
}

int pq_is_full(PriorityQueue *ptr) {
  if(ptr->size == ptr->last) {
    return 1;
  }

  return 0;
}

void bubble_up(PriorityQueue *ptr) {
  if(ptr->last < 2) {
    return;
  }

  for(int i = ptr->last; i > 0; i--) {
    if(ptr->nodes[i - 1].p < ptr->nodes[i].p) {
      const Node temp = ptr->nodes[i];
      ptr->nodes[i] = ptr->nodes[i - 1];
      ptr->nodes[i - 1] = temp;
    }
  }
}

int pq_enqueue(int num, int p, PriorityQueue *ptr) {
  Node node = {num, p};

  if(pq_is_full(ptr)){
    return -1;
  }

  if(ptr->last == -1) {
    ptr->last = 0;
  }

  ptr->nodes[ptr->last] = node;
  ptr->last++;
  bubble_up(ptr);
  return 0;
}