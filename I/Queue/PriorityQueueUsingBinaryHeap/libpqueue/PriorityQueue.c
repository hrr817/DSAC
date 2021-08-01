#include <stdlib.h>
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
  if(ptr->last < 1) {
    return;
  }

  int child_idx = ptr->last - 1;
  int child_priority = ptr->nodes[child_idx].p;
  int parent_idx = (child_idx - 1) / 2;
  int parent_priority = ptr->nodes[parent_idx].p;

  while(child_priority < parent_priority) {
    Node temp = ptr->nodes[parent_idx];
    ptr->nodes[parent_idx] = ptr->nodes[child_idx];
    ptr->nodes[child_idx] = temp;

    child_idx = parent_idx;
    parent_idx = (child_idx - 1) / 2;
    child_priority = ptr->nodes[child_idx].p;
    parent_priority = ptr->nodes[parent_idx].p;
  }
}

void sink_down(PriorityQueue *ptr) {
  if(ptr->last < 1) {
    return;
  }

  int parent_idx = 0;
  int parent_priority = ptr->nodes[parent_idx].p;
  int child_idx_1 = (parent_idx + 1) * 2;
  int child_idx_2 = child_idx_1 - 1;
  int child_priority_1 = ptr->nodes[child_idx_1].p;
  int child_priority_2 = ptr->nodes[child_idx_2].p;

  while((parent_priority > child_priority_1) || parent_priority > child_priority_2) {
    int child_idx = child_priority_1 > child_priority_2 ? child_idx_1 : child_idx_2;
    Node temp = ptr->nodes[child_idx];
    ptr->nodes[child_idx] = ptr->nodes[parent_idx];
    ptr->nodes[parent_idx] = temp;

    parent_idx = child_idx;
    parent_priority = ptr->nodes[parent_idx].p;
    child_idx_1 = (parent_idx + 1) * 2;
    child_idx_2 = child_idx_1 - 1;

    if(child_idx_1 > ptr->last) {
      return;
    }

    child_priority_1 = ptr->nodes[child_idx_1].p;
    child_priority_2 = ptr->nodes[child_idx_2].p;

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

int pq_is_empty(PriorityQueue *ptr) {
  if(ptr->last == -1) {
    return 1;
  }

  return 0;
};

int pq_dequeue(PriorityQueue *ptr) {
  if(pq_is_empty(ptr)) {
    return -1;
  }
  int v = ptr->nodes[0].v;
  ptr->nodes[0] = ptr->nodes[ptr->last - 1];
  ptr->last--;

  sink_down(ptr);

  if(ptr->last == 0) {
    ptr->last = -1;
  }
  return v;
}

int pq_peek(PriorityQueue *ptr) {
  if(ptr->last == -1) {
    return -1;
  }

  return ptr->nodes[0].v;
}