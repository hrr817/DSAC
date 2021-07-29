/**
 ********************************* 
 * Applications of Circular Queue
 * CPU scheduling
 * Memory management
 * Traffic Management
 *********************************
 */

/**
 * Struture of Circular Queue
 * Members
 * @start:    type: int,  starting of queue
 * @end:      type: int,  ending of queue
 * @elements: type: int*, array of int
 */
 typedef struct _cir_queue CircularQueue;

 /**
 * Create a Circular Queue
 * @param size, type: int, capacity (number of elements to hold)
 * @returns CircularQueue*, pointer of initialized circular queue
 */
 CircularQueue* create_cir_queue(int size);

 /**
 * Checks if the given CircularQueue is full
 * @param ptr, type: CircularQueue*
 * @returns 1 in case of stack is full else 0
 */
 int cir_is_full(CircularQueue *ptr);

 /**
 * Checks if the given CircularQueue is empty
 * @param ptr, type: CircularQueue*
 * @returns 1 in case of stack is full else 0
 */
 int cir_is_empty(CircularQueue *ptr);

 /**
 * Enqueues given num to given circular queue
 * @param num, type: int, number to be enqueued
 * @param ptr, type: CircularQueue*, where num is to be enqueued
 * @returns 1 in case of stack is full else 0
 */
 int cir_enqueue(int num, CircularQueue *ptr);

 /**
 * Dequeues oldest num from given circular queue
 * @param ptr, type: CircularQueue*, where oldest num is to be dequeued
 * @returns 1 in case stack is empty else 0
 */
 int cir_dequeue(CircularQueue *ptr);

 /**
 * Gets the oldest num that to be dequeued
 * @param ptr, type: CircularQueue*, where oldest num is to be dequeued
 * @returns -1 if queue if empty else num
 */
 int cir_peek(CircularQueue *ptr);

