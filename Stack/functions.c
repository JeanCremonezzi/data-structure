#include "header.h";

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