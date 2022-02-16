void init(Queue *ptrQueue);
/* Init creates an empty queue */

int checkLoad(Queue *ptrQueue);
/* CheckLoad returns:
    -1 = queue is empty
    0 = queue still has free space
    1 = queue is full
*/