typedef struct Node{
    int value;
    struct Node *next;
} Node;

typedef struct {
    struct Node *first;
    struct Node *last;
} *List;