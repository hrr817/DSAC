/* Functions */
// Enqueue: Add an element to the end of the queue
// Dequeue: Remove an element from the front of the queue
// IsEmpty: Check if the queue is empty
// IsFull: Check if the queue is full
// Peek: Get the value of the front of the queue without removing it

/**
 *  Struture for Queue
 *  @size:       type: int (number of elements that can be stored given at the time of creation)
 *  @last:       type: int (index of newly added element)
 *  @elements:   type: int* (can be queued)
 */
typedef struct _queue Queue;

/**
 *  Queues a given number to given queue
 *  @param size type: int, capacity for elements
 *  @returns Queue* : address of newly initialized Queue 
 */
Queue* create_queue(int size);

/**
 *  Queues a given number to given queue
 *  @param num type: int, to be queued
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns 1 if stack is full
 */
int enqueue(int num, Queue *ptr);

/**
 *  Dequeues a first element (inserted order) from given queue
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns -1 if no queue is empty, first element (int)
 */
int dequeue(Queue *ptr);

/**
 *  Checks if the given Queue is empty
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns 1 if empty else 0
 */
int is_empty(Queue *ptr);

/**
 *  Checks if the given Queue is full
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns 1 if full else 0
 */
int is_full(Queue *ptr);

/**
 *  Gives the the first element that to be dequeued
 *  from the given Queue
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns first element, type: int
 */
int peek(Queue *ptr);


