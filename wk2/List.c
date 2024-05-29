#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "List.h"

// create a new empty list
struct node *ListNew() {
    return NULL;
}

// add item to end of list
List ListAdd(List l, int val) {
    // malloc a new node
    List newNode = malloc(sizeof(struct node));
    newNode->next = NULL;
    newNode->data = val;

    // if empty list
    if (l == NULL) {
        return newNode;
    }

    // add to end of list
    List curr = l;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = newNode;
    return l;
}

// delete the first item with value 'val' from list -- recursively
// if 'val' is not in the list, do nothing
// returns the head of the new linked list
struct node *ListDelete(struct node *l, int val) {
    // TODO
    return NULL;
}

// delete all odd numbers from list -- recursively
struct node *ListDeleteOdds(struct node *l) {
    // TODO
    return NULL;
}

// delete every second node (second, fourth, sixth, etc. node)
struct node *ListDeleteSecond(struct node *l) {
    // TODO
    return NULL;
}

// prints out the linked list
void ListPrint(struct node *l) {
    // TODO
}

// prints out the linked list in reverse
void ListPrintReverse(struct node *l) {
    // TODO
}

// returns length of linked list
int ListLength(struct node *l) {
    // TODO
    return 0;
}

// returns number of odd nodes in linked list
int ListCountOdd(struct node *l) {
    // TODO
    return 0;
}

// check if list is sorted in non-descending order
bool ListIsSorted(struct node *l) {
    // TODO
    return false;
}

// ! THE FOLLOWING TWO EXAMPLES SHOW TWO COMMON TRICKS / TECHNIQUES YOU CAN
// ! USE WHEN CODING RECURSIVELY. TAKE NOTE OF THESE.

// multiply each element in the list by it's position
// e.g. 1st node gets multiplied by 1, 2nd node get multiplied by 2, etc.
void ListTransform(struct node *l) {
    // TODO
    return;
}

// multiply each element in the list by it's position
// e.g. 1st node gets multiplied by 1, 2nd node get multiplied by 2, etc.
void ListTransformAlternate(struct node *l) {
    // TODO
    return;
}
