#include <stdio.h>
#include "./lib/intstack.c"

int main() {
  IntStack* mystack = create_stack();

  printf("Stack:\n");
  printf("-> top: %d\n", mystack->top);
  printf("-> size: %d\n", mystack->size);

  printf("---> pushing 15 elements...\n");
  for (int i = 1; i <= 15; i++) {
    push(i * 1, mystack);
  }

  printf("Stack:\n");
  printf("-> top: %d\n", mystack->top);
  printf("-> size: %d\n", mystack->size);
  printf("-> peek: %d\n", peek(mystack));
  printf("Elements: \n");

  for (int i = 0; i < mystack->size; i++) {
    printf("%d\n", mystack->elements[i]);
  }

  printf("---> popping...\n");
  printf("Popped element: %d\n", pop(mystack));

  printf("Stack:\n");
  printf("-> top: %d\n", mystack->top);
  printf("-> size: %d\n", mystack->size);
  printf("-> peek: %d\n", peek(mystack));
  printf("Elements: \n");

  for (int i = 0; i < mystack->size; i++) {
    printf("%d\n", mystack->elements[i]);
  }
}