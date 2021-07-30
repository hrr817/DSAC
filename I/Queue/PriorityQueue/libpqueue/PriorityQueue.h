/**
 *  Struture for Queue
 *  @v:    type: int, value (value set by user)
 *  @p:    type: int, priority (position in queue)
 */
typedef struct _node Node;

/**
 *  Struture for Priority Queue
 *  @size:       type: int (number of elements that can be stored given at the time of creation)
 *  @last:       type: int (index of newly added element)
 *  @elements:   type: Node* (elements)
 */
typedef struct _pqueue PriorityQueue;

/**
 *  Queues a given number to given queue
 *  @param size type: int, capacity for elements
 *  @returns Queue* : address of newly initialized Queue 
 */
PriorityQueue* create_pq(int size);

/**
 *  Sorts the last element in Priority Queue
 *  to suitable place according its priority
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns -1 if no queue is empty
 */
int bubble_up(PriorityQueue *ptr);

/**
 *  Queues a given number to given queue
 *  @param num type: int, to be queued
 *  @param p   type: int, priority
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns 1 if stack is full
 */
int pq_enqueue(int num, int p, PriorityQueue *ptr);

/**
 *  Dequeues a first element (inserted order) from given queue
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns -1 if no queue is empty, first element (int)
 */
int pq_dequeue(PriorityQueue *ptr);

/**
 *  Checks if the given Queue is empty
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns 1 if empty else 0
 */
int pq_is_empty(PriorityQueue *ptr);

/**
 *  Checks if the given Queue is full
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns 1 if full else 0
 */
int pq_is_full(PriorityQueue *ptr);

/**
 *  Gives the the first element that to be dequeued
 *  from the given Queue
 *  @param ptr type: *Queue, pointer of Queue
 *  @returns first element, type: int
 */
int pq_peek(PriorityQueue *ptr);


