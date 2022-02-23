typedef struct Node{
    int value;
    struct Node *next;
    struct Node *previous;
} Node;

typedef struct {
    struct Node *first;
    struct Node *last;
} *List;