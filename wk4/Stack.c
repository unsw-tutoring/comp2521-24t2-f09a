#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "Stack.h"

struct stack {
    int *items;
    int size;
    int capacity;
};

// Creates a new empty stack
Stack StackNew(void) {
    Stack s = malloc(sizeof(struct stack));
    s->items = malloc(2 * sizeof(int));
    s->size = 0;
    s->capacity = 2;
    return s;
}

// Pushes an item onto the stack
void StackPush(Stack s, int item) {
    if (s->size == s->capacity) {
        s->capacity *= 2;
        s->items = realloc(s->items, s->capacity * sizeof(int));
    }
    s->items[s->size++] = item;

}

// Pops an item from the stack and returns it
// Assumes that the stack is not empty
int StackPop(Stack s) {
    return s->items[--s->size];
}

// Returns the number of items on the stack
int StackSize(Stack s) {
    return s->size;
}
