/**
 * Structure for Stack
 */
typedef struct _int_stack IntStack;

/**
 * Creates a stack
 * @return IntStack*
 */
IntStack* create_stack();

/**
 * Pushes given number at the top of given stack
 * @param num to be pushed
 * @param ptr* where num will be pushed
 * @return 0 or 1, returns 1 in case of error
 */
int push(int num, IntStack *ptr);

/**
 * Removes number from top of the given stack
 * @param ptr* where num will be pushed
 */
int pop(IntStack *ptr);

/**
 * @param ptr* where num will be pushed
 * @returns number from top of the given stack
 */
int peek(IntStack *ptr);