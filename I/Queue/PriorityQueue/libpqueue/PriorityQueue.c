#include <stdlib.h>
#include "./PriorityQueue.h"

typedef struct _node {
  int v;
  int p;
} Node;


typedef struct _pqueue {
  int size;
  int last;
  Node* ptr;
} PriorityQueue;

