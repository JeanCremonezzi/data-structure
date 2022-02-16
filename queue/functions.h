void init(Queue *ptrQueue) {
    ptrQueue->front = -1;
    ptrQueue->end = -1;
}

int checkLoad(Queue *ptrQueue) {
    if (ptrQueue->front == -1) {
        // Is empty
        return -1;

    } else if (ptrQueue->end == (MAXSIZE - 1)) {
        // Is full
        return 1;
        
    } else {
        // Has free space
        return 0;
    }
}