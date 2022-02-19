#include "header.h"

Head init() {
    Head adrsHead = malloc(sizeof(Head));

    adrsHead->first = NULL;

    return adrsHead;
}

int isEmpty(Head ptrHead) {
    return ptrHead->first == NULL ? 1 : 0;
}

Node* unshift(Head ptrHead, int item) {
    Node *newNode = malloc(sizeof(Node));

    newNode->value = item;
    newNode->next = ptrHead->first;
    ptrHead->first = newNode;

    return newNode;
}