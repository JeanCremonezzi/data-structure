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

    ptrList->last->next = newNode;
    
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