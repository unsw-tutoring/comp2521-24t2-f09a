#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node *List;

// create a new empty list
List ListNew();

// add item to end of list
List ListAdd(List l, int val);

// delete first item with value 'val' from list
List ListDelete(List l, int val);

// delete all nodes with an odd value from list
List ListDeleteOdds(List l);

// delete every second node (second, fourth, sixth, etc. node)
List ListDeleteSecond(List l);

// prints out the linked list
void ListPrint(List l);

// prints out the linked list in reverse
void ListPrintReverse(List l);

// returns length of linked list
int ListLength(List l);

// returns number of even nodes in linked list
int ListCountEvens(List l);

// check if list is sorted in non-descending order
bool ListIsSorted(List l);

// multiply each element in the list by it's position
// e.g. 1st node gets multiplied by 1, 2nd node get multiplied by 2, etc.
void ListTransform(List l);

#endif
