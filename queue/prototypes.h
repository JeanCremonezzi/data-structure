void init(Queue *ptrQueue);
/* Init creates an empty queue */

int checkLoad(Queue *ptrQueue);
/* CheckLoad returns:
    -1 = queue is empty
    0 = queue still has free space
    1 = queue is full
*/

int push(Queue *ptrQueue, int number);
/* Push insert a number from queue rear and returns:
    0 = succeed
    1 = fails
*/

int pop(Queue *ptrQueue);
/* Pop remove a number from queue front and returns:
    int < 0 = Is empty
    int >= 0 = the removed number
*/

int size(Queue *ptrQueue);
/* Size calculates the size of the queue and returns:
    > 0 = size of the queue
    0 = empty
*/