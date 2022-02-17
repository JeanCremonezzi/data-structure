void init(Stack *ptrStack);
/* Init creates an empty stack */

int checkLoad(Stack *ptrStack);
/* CheckLoad returns:
    -1 = stack is empty
    0 = stack still has free space
    1 = stack is full
*/

int push(Stack *ptrStack, int number);
/* Push inserts a number at stack top and returns:
    0 = succeed
    1 = fails
*/

int pop(Stack *ptrStack);
/* Pop removes a number from stack top and returns:
    int < 0 = Is empty
    int >= 0 = the removed number
*/