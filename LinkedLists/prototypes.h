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

void printList(List ptrList);
/* PrintList prints all elements in the list:
    (index) element
*/

Node* insert(List ptrList, int index, int item);
/* Inserts a new item in the specified index of the list and returns:
    the position of the new item

    -> If index is out of range, inserts in the end with push()
    -> If list is empty, inserts in the front with unshift()
*/