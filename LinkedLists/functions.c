#include "header.h"

Head* init() {
    Head* adrsHead = malloc(sizeof(Head));

    adrsHead->first = NULL;

    return adrsHead;
}