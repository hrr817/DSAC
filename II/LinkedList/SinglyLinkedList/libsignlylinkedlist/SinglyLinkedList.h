/**
 * Structure for SinglyLinkedList
 * @value: type: int, integer
 * @next: type: *Node, pointer of next integer
 */
typedef struct _node Node; 

/**
 * Structure for SinglyLinkedList
 * @start: type: Node, starting element
 * @end: type: Node, last element
 */
typedef struct _singly_linked_list SinglyLinkedList;

/**
 * Creates a stack
 * @return SinglyLinkedList*
 */
SinglyLinkedList* create_singly_linked_list();

/**
 * Pushes given number at the end of given linked list
 * @param num to be pushed
 * @param ptr* where num will be pushed
 * @return 0 or 1, returns 1 in case of error
 */
int push(int num, SinglyLinkedList *ptr);

/**
 * Removes number from the start of the given linked list
 * @param ptr* where num will be pushed
 */
int pop(SinglyLinkedList *ptr);

/**
 * Removes number from top of the given linked list
 * @param ptr* where num will be pushed
 */
int shift(SinglyLinkedList *ptr);

/**
 * Displays all the Nodes in given linked list
 * @param ptr* where num will be pushed
 */
void traverse(SinglyLinkedList *ptr);