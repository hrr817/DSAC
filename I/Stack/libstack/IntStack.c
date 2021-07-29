#include <stdlib.h>
#include "./IntStack.h"

typedef struct _int_stack {
  int top;
  int size;
  int* elements;
} IntStack;

IntStack* create_stack(){
  IntStack *ptr = (IntStack*)malloc(sizeof(IntStack));
  ptr->top = 0;
  ptr->size = 10;
  ptr->elements = (int*)malloc(ptr->size * sizeof(int));

  if(ptr->elements == NULL) {
    ptr->size = 0;
  }

  return ptr;
}

int push(int num, IntStack *ptr) {
  if(ptr->top == ptr->size) {
    ptr->elements = realloc(ptr->elements, sizeof(int) * ptr->size + 10);
    ptr->size += 10;
  }

  if(ptr == NULL) {
    return 1;
  }

  ptr->elements[ptr->top] = num;
  ptr->top++;
  return 0;
}

int pop(IntStack *ptr) {
  if(ptr->top == 0) {
    return 0;
  }

  if(ptr == NULL) {
    return 1;
  }

  int temp = ptr->elements[ptr->top - 1];
  ptr->elements[ptr->top-- - 1] = 0;
  return temp;
}

int peek(IntStack *ptr) {
  return ptr->elements[ptr->top - 1];
}