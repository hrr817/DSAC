/**
 * Structure for Doubly LinkedList
 * @value: type: int, integer
 * @prev: type: *Node, pointer of previous integer
 * @next: type: *Node, pointer of next integer
 */
typedef struct _node Node; 

/**
 * Structure for Doubly LinkedList
 * @start: type: Node, starting element
 * @end: type: Node, last element
 */
typedef struct _doubly_linked_list DoublyLinkedList;

/**
 * Creates a stack
 * @return LinkedList*
 */
DoublyLinkedList* create_linkedlist();

/**
 * Pushes given number at the end of given linked list
 * @param num to be pushed
 * @param ptr* where num will be pushed
 * @return 0 or 1, returns 1 in case of error
 */
int push(int num, DoublyLinkedList *ptr);

/**
 * Removes number from the start of the given linked list
 * @param ptr* where num will be pushed
 */
int pop(DoublyLinkedList *ptr);

/**
 * Removes number from top of the given linked list
 * @param ptr* where num will be pushed
 */
int shift(DoublyLinkedList *ptr);