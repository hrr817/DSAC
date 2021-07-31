/**
 * Struture of Dequeue
 * Members
 * @start:    type: int,  starting of queue
 * @end:      type: int,  ending of queue
 * @size:     type: int,  size of array
 * @elements: type: int*, array of int
 */
  typedef struct _dequeue Dequeue;

 /**
 * Create a Dequeue
 * @param size, type: int, capacity (number of elements to hold)
 * @returns Dequeue*, pointer of initialized circular queue
 */
 Dequeue* create_dequeue(int size);

 /**
 * Checks if the given Dequeue is full
 * @param ptr, type: Dequeue*
 * @returns 1 in case of stack is full else 0
 */
 int dq_is_full(Dequeue *ptr);

 /**
 * Checks if the given Dequeue is empty
 * @param ptr, type: Dequeue*
 * @returns 1 in case of stack is full else 0
 */
 int dq_is_empty(Dequeue *ptr);

 /**
 * Enqueues given num at the start of the given circular queue
 * @param num, type: int, number to be enqueued
 * @param ptr, type: Dequeue*, where num is to be enqueued
 * @returns 1 in case of stack is full else 0
 */
 int dq_enqueue_start(int num, Dequeue *ptr);

 /**
 * Enqueues given num at the end of the to given circular queue
 * @param num, type: int, number to be enqueued
 * @param ptr, type: Dequeue*, where num is to be enqueued
 * @returns 1 in case of stack is full else 0
 */
 int dq_enqueue_end(int num, Dequeue *ptr);

 /**
 * Dequeues fist num from given circular queue
 * @param ptr, type: Dequeue*, where oldest num is to be dequeued
 * @returns 1 in case stack is empty else 0
 */
 int dq_dequeue_start(Dequeue *ptr);

 /**
 * Dequeues last num from given circular queue
 * @param ptr, type: Dequeue*, where oldest num is to be dequeued
 * @returns 1 in case stack is empty else 0
 */
 int dq_dequeue_end(Dequeue *ptr);

 /**
 * Gets the fisrt num that to be dequeued
 * @param ptr, type: Dequeue*, where oldest num is to be dequeued
 * @returns -1 if queue if empty else num
 */
 int dq_get_start(Dequeue *ptr);

 /**
 * Gets the last num that to be dequeued
 * @param ptr, type: Dequeue*, where oldest num is to be dequeued
 * @returns -1 if queue if empty else num
 */
 int dq_get_end(Dequeue *ptr);

