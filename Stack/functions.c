#include "header.h"

void init(Stack *ptrStack) {
    ptrStack->top = -1;
}

int checkLoad(Stack *ptrStack) {
    if (ptrStack->top == -1) {
        // Is empty
        return -1;

    } else if (ptrStack->top == (MAXSIZE - 1)) {
        // Is full
        return 1;

    } else {
        // Has free space
        return 0;
    }
}

int push(Stack *ptrStack, int number) {

    int load = checkLoad(ptrStack);

    if (load == -1) {
        // Is empty
        ptrStack->top = 0;
        ptrStack->numbers[0] = number;

        return 0;

    } else if (load == 0) {
        // Has free space
        ptrStack->top++;
        ptrStack->numbers[ptrStack->top] = number;

        return 0;

    } else {
        // Is full
        return 1;
    }
}

int pop(Stack *ptrStack) {
    int load = checkLoad(ptrStack);

    if (load == -1) {
        // Is empty
        return -1;

    } else {
        // Isn't empty
        int num = ptrStack->numbers[ptrStack->top];

        ptrStack->top--;

        return num;
    }

}