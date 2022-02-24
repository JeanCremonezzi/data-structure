#include "header.h"

List init() {
    List adrsList = malloc(sizeof(List));

    adrsList->first = NULL;
    adrsList->last = NULL;

    return adrsList;
}

int isEmpty(List ptrList) {
    return ptrList->first == NULL ? 1 : 0;
}

Node* unshift(List ptrList, int item) {
    Node *newNode = malloc(sizeof(Node));

    newNode->value = item;
    newNode->next = ptrList->first;
    newNode->previous = NULL;

    if (isEmpty(ptrList)) {
        ptrList->last = newNode;
    }

    ptrList->first = newNode;

    return newNode;
}

Node* push(List ptrList, int item) {
    Node *newNode = malloc(sizeof(Node));

    newNode->value = item;
    newNode->next = NULL;
    newNode->previous = ptrList->last;

    if (isEmpty(ptrList) == 1) {
        ptrList->first = newNode;
    } else {
        ptrList->last->next = newNode;
    }

    ptrList->last = newNode;

    return newNode;
}

void printList(List ptrList) {

    if (isEmpty(ptrList)) {
        printf("\nList is empty");
    } else {
        Node *toPrint = ptrList->first;

        printf("\n");

        int index = 0;
        while (1) {
            printf("(%i)%i | ", index, toPrint->value);

            if (toPrint->next == NULL) {
                break;
            }

            toPrint = toPrint->next;
            index++;
        }
    }
}

Node* insert(List ptrList, int index, int item) {

    if (index == 0 || isEmpty(ptrList)) {
        return unshift(ptrList, item);

    } else {
        Node *newNode = malloc(sizeof(Node));
        newNode->value = item;

        Node *prevNode = ptrList->first;

        for (int indexInList = 1; indexInList <= index; indexInList++) {

            if (prevNode->next == NULL) {
                push(ptrList, item);
                break;

            } else if (indexInList == index) {
                newNode->next = prevNode->next;
                newNode->previous = prevNode;    

                prevNode->next->previous = newNode;
                prevNode->next = newNode;
                prevNode = prevNode->next;
                break;
            }

            prevNode = prevNode->next;
        }

        return newNode;
    }
}

int shift(List ptrList) {

    if (!isEmpty(ptrList)) {
        Node *nodeToRemove = ptrList->first;
        int item = nodeToRemove->value;

        if (nodeToRemove->next == NULL) {
            ptrList->last = NULL;
        } else {
            ptrList->first->next->previous = NULL;
        }

        ptrList->first = nodeToRemove->next;
        
        free(nodeToRemove);

        return item;
    }
}

int pop(List ptrList) {

    if (!isEmpty(ptrList)) {
        Node *nodeToRemove = ptrList->last;
        int item = nodeToRemove->value;

        if (ptrList->first == ptrList->last) {
            ptrList->first = NULL;
            ptrList->last = NULL;
            
        } else {
            Node *nodeCheck = ptrList->first;

            while (1) {
                if (nodeCheck->next->next == NULL) {
                    nodeCheck->next = NULL;
                    ptrList->last = nodeCheck;
                    break;
                }

                nodeCheck = nodeCheck->next;
            }
        }
        
        free(nodeToRemove);

        return item;
    }
}

int removeFrom(List ptrList, int index) {

    if (!isEmpty(ptrList)) {
        if (index == 0) {
            return shift(ptrList);
        }

        Node *nodeToRemove = ptrList->first->next;

        for (int i = 1; i <= index; i++) {
            if (i == index) {

                if (nodeToRemove->next == NULL) {
                    ptrList->last = nodeToRemove->previous;
                    ptrList->last->next = NULL;
                } else {
                    nodeToRemove->next->previous = nodeToRemove->previous;
                }

                int item = nodeToRemove->value;
                free(nodeToRemove);
                return item;
            }

            if (nodeToRemove->next == NULL) {
                break;
            }

            nodeToRemove = nodeToRemove->next;
        }
    }
}

int inIndex(List ptrList, int index) {

    if (!isEmpty(ptrList)) {
        Node *actualNode = ptrList->first;

        for (int i = 0; i <= index; i++) {
            if (i == index) {
                return actualNode->value;
            }

            if (actualNode->next == NULL) {
                break;
            }

            actualNode = actualNode->next;
        }
    }
}

int indexOf(List ptrList, int item) {

    if (!isEmpty(ptrList)) {
        Node *actualNode = ptrList->first;

        int index = 0;
        while (1) {
            if (actualNode->value == item) {
                return index;
            }

            if (actualNode->next == NULL) {
                break;
            }

            index++;
            actualNode = actualNode->next;
        }       
    }

    return -1;
}

void reverse(List ptrList) {

    if (!isEmpty(ptrList) && ptrList->first->next != NULL) {
        Node *auxNode = ptrList->last;
        
        ptrList->first = ptrList->last;

        while (1) {

            if (auxNode->previous == NULL) {
                auxNode->previous = auxNode->next;
                auxNode->next = NULL;
                ptrList->last = auxNode;

                break;
            }
            
            Node *auxNodePrev= auxNode->next;

            auxNode->next = auxNode->previous;
            auxNode->previous = auxNodePrev;

            auxNode = auxNode->next;
        }
    }
}