List init();
/* Init creates the list head and returns:
    The header position
*/

int isEmpty(List ptrList);
/* isEmpty returns:
    0 = list isn't empty
    1 = list is empty
*/

Node* unshift(List ptrList, int item);
/* unshift inserts a new item in the front of the list and returns:
    the position of the new item
*/

Node* push(List ptrList, int item);
/* push inserts a new item in the end of the list and returns:
    the position of the new item
*/