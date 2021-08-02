/**
 * Structure for LinkedList
 * @value: type: int, integer
 * @next: type: *int, pointer of next integer
 */
typedef struct _node Node; 

/**
 * Structure for LinkedList
 * @start: type: Node, starting element
 * @end: type: Node, last element
 */
typedef struct _linked_list LinkedList;

/**
 * Creates a stack
 * @return LinkedList*
 */
LinkedList* create_linkedlist();

/**
 * Pushes given number at the end of given linked list
 * @param num to be pushed
 * @param ptr* where num will be pushed
 * @return 0 or 1, returns 1 in case of error
 */
int push(int num, LinkedList *ptr);

/**
 * Removes number from the start of the given linked list
 * @param ptr* where num will be pushed
 */
int pop(LinkedList *ptr);

/**
 * Removes number from top of the given linked list
 * @param ptr* where num will be pushed
 */
int shift(LinkedList *ptr);