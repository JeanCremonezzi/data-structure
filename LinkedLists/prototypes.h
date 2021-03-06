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

int shift(List ptrList);
/* Shift removes an item from the front of the list and returns:
    the removed item
*/

int pop(List ptrList);
/* Pop removes an item from the end of the list and returns:
    the removed item
*/

int removeFrom(List ptrList, int index);
/* RemoveFrom removes an item from the specified index of the list and returns:
    the removed item
*/

int inIndex(List ptrList, int index);
/* InIndex finds an item from the specified index of the list and returns:
    the item in the index
*/

int indexOf(List ptrList, int item);
/* IndexOf finds the index of an specified item in the list and returns:
    -> If the item is on the list, the index of the first occurrence of the item
    -> -1 if the is isn't on the list or list is empty
*/

void reverse(List ptrList);
/* Reverse relocates all list items in reverse order */