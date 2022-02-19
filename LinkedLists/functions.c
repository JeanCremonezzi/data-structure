#include "header.h"

List init() {
    List adrsHead = malloc(sizeof(List));

    adrsHead->first = NULL;

    return adrsHead;
}

int isEmpty(List ptrHead) {
    return ptrHead->first == NULL ? 1 : 0;
}

Node* unshift(List ptrHead, int item) {
    Node *newNode = malloc(sizeof(Node));

    newNode->value = item;
    newNode->next = ptrHead->first;
    ptrHead->first = newNode;

    return newNode;
}