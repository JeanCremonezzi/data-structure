#include "header.h"

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

int push(Queue *ptrQueue, int number) {

    int load = checkLoad(ptrQueue);

    if (load == -1) {
        // Is empty
        ptrQueue->front = 0;
        ptrQueue->end = 0;
        ptrQueue->numbers[0] = number;

        return 0;

    } else if (load == 0) {
        // Has free space
        ptrQueue->end++;
        ptrQueue->numbers[ptrQueue->end] = number;

        return 0;

    } else {
        // Is full
        return 1;
    }
}

int pop(Queue *ptrQueue) {
    int load = checkLoad(ptrQueue);

    if (load == -1) {
        // Is empty
        return -1;

    } else {
        // Isn't empty
        int num = ptrQueue->numbers[ptrQueue->front];

        if (load == 1 && ptrQueue->front == ptrQueue->end) {
            // Is full
            init(ptrQueue);

        } else {
            // Isn't full
            ptrQueue->front++;
        }

        return num;
    }
}

int size(Queue *ptrQueue) {
    return ptrQueue->end + 1;
}