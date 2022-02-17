void init(Stack *ptrStack);
/* Init creates an empty stack */

int checkLoad(Stack *ptrStack);
/* CheckLoad returns:
    -1 = stack is empty
    0 = stack still has free space
    1 = stack is full
*/