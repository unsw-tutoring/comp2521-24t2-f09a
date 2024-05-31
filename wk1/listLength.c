#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

// return the number of nodes in a linked list, given its head
int listLength(struct node *list);

// use a while loop
int listLength(struct node *list) {
    int count = 0;
    struct node *curr = list;
    while (curr != NULL) {
        count++;
        curr = curr->next;
    }

    return count;
}

// use a for loop
int listLength(struct node *list) {
    int count = 0;

    for (struct node *curr = list; curr != NULL; count++) {
        curr = curr->next;
    }

    return count;
}
