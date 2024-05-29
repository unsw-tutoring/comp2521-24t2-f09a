#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int elem;
    struct node *left;
    struct node *right;
};

// returns the number of odd values in a binary search tree
int bstCountOdds(struct node *t) {
    // TODO
    return 0;
}

// count number of internal nodes in a given tree
// an internal node is a node with at least one child node
int bstCountInternal(struct node *t) {
    // TODO
    return 0;
}

// returns the level of the node containing a given key if such a node exists,
// otherwise the function returns -1
// (when a given key is not in the binary search tree)
// The level of the root node is zero.
int bstNodeLevel(struct node *t, int key) {
    // TODO
    return 0;
}

// counts the number of values that are greater than a given value.
// This function should avoid visiting nodes that it doesn't have to visit
int bstCountGreater(struct node *t, int val) {
    // TODO
    return 0;
}

#define NOT_HEIGHT_BALANCED -99

// returns the height of a given binary tree if it is height - balanced,
// and NOT_HEIGHT_BALANCED otherwise.
// Height-balanced tree: We say that a basic binary tree is height-balanced if,
//      for every node, the absolute difference between the height of the left
//      subtree and the height of the right subtree is one or less. In other
//      words, every node needs to satisfy the following criteria:
//      abs(height(left) - height(right)) ≤ 1
int isHeightBalanced(struct node *t) {
    // TODO
    return 0;
}

// challenging question!

// return the kth smallest node in the binary search tree
// return -1 if no such node exists (e.g. the 5th smallest number
// if a tree with only 3 nodes)
int kthSmallest(struct node *t, int k) {
    // TODO
    return 0;
}
