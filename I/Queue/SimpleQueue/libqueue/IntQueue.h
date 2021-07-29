/* Functions */
// Enqueue: Add an element to the end of the queue
// Dequeue: Remove an element from the front of the queue
// IsEmpty: Check if the queue is empty
// IsFull: Check if the queue is full
// Peek: Get the value of the front of the queue without removing it

/**
 *  Struture for Queue
 *  @member - size: int (number of elements that can be stored given at the time of creation)
 *  @member - last: int (index of newly added element)
 *  @member - elements: int* (can be queued)
 */
typedef struct _int_queue IntQueue;

/**
 *  Queues a given number to given queue
 *  @param size type: int, capacity for elements
 *  @returns IntQueue* : address of newly initialized IntQueue 
 */
IntQueue* create_queue(int size);

/**
 *  Queues a given number to given queue
 *  @param num type: int, to be queued
 *  @param ptr type: *IntQueue, pointer of IntQueue
 *  @returns 1 if stack is full
 */
int enqueue(int num, IntQueue *ptr);

/**
 *  Dequeues a first element (inserted order) from given queue
 *  @param ptr type: *IntQueue, pointer of IntQueue
 *  @returns -1 if no queue is empty, first element (int)
 */
int dequeue(IntQueue *ptr);

/**
 *  Checks if the given IntQueue is empty
 *  @param ptr type: *IntQueue, pointer of IntQueue
 *  @returns 1 if empty else 0
 */
int is_empty(IntQueue *ptr);

/**
 *  Checks if the given IntQueue is full
 *  @param ptr type: *IntQueue, pointer of IntQueue
 *  @returns 1 if full else 0
 */
int is_full(IntQueue *ptr);

/**
 *  Gives the the first element that to be dequeued
 *  from the given IntQueue
 *  @param ptr type: *IntQueue, pointer of IntQueue
 *  @returns first element, type: int
 */
int peek(IntQueue *ptr);


