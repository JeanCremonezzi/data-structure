List init();
/* Init creates the list head and returns:
    The header position
*/

int isEmpty(List ptrHead);
/* isEmpty returns:
    0 = list isn't empty
    1 = list is empty
*/

Node* unshift(List ptrHead, int item);
/* unshift inserts a new item in the front of the list and returns:
    the position of the new item
*/