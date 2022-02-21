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

    if (isEmpty(ptrList) == 1) {
        ptrList->last = newNode;
    }

    ptrList->first = newNode;

    return newNode;
}

Node* push(List ptrList, int item) {
    Node *newNode = malloc(sizeof(Node));

    newNode->value = item;
    newNode->next = NULL;

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
            index++;

            if (toPrint->next == NULL) {
                break;
            }

            toPrint = toPrint->next;
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
        };

        ptrList->first = nodeToRemove->next;
        
        free(nodeToRemove);

        return item;
    }
}