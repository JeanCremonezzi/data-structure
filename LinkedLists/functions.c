#include "header.h"

Head init() {
    Head adrsHead = malloc(sizeof(Head));

    adrsHead->next = NULL;

    return adrsHead;
}

int isEmpty(Head ptrHead) {
    return ptrHead->next == NULL ? 1 : 0;
}