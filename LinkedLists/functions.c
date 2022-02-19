#include "header.h"

Head init() {
    Head adrsHead = malloc(sizeof(Head));

    adrsHead->first = NULL;

    return adrsHead;
}

int isEmpty(Head ptrHead) {
    return ptrHead->first == NULL ? 1 : 0;
}