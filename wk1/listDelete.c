#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct node *listNew(void) {
    return NULL;
}

struct node *listInsert(struct node *list, int value) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->value = value;
    newNode->next = list;
    return newNode;
}

// delete the first instance of node with 'value' from the linked list
// returns the head of the linked list after this is complete
struct node *listDelete(struct node *list, int value) {
    // TODO
    return NULL;
}

int listLength(struct node *list) {
    int length = 0;
    for (struct node *curr = list; curr != NULL; curr = curr->next) {
        length++;
    }
    return length;
}

int main(void) {
    struct node *list = listNew();

    list = listInsert(list, 1);
    list = listInsert(list, 2);
    list = listInsert(list, 3);
    list = listInsert(list, 4);
    list = listInsert(list, 5);

    list = listDelete(list, 3);

    // print list
    for (struct node *curr = list; curr != NULL; curr = curr->next) {
        printf("%d\n", curr->value);
    }

    return 0;
}
