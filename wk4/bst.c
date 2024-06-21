#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

struct node {
    int elem;
    struct node *left;
    struct node *right;
};

// returns the number of nodes in a binary search tree
int bstCountNodes(struct node *t) {
    if (t == NULL) return 0;

    return 1 + bstCountNodes(t->left) + bstCountNodes(t->right);
}

// returns the number of odd values in a binary search tree
int bstCountOdds(struct node *t) {
    if (t == NULL) return 0;

    if (t->elem % 2 == 1) {
        return 1 + bstCountOdds(t->left) + bstCountOdds(t->right);
    }

    return bstCountOdds(t->left) + bstCountOdds(t->right);
}

// count number of internal nodes in a given tree
// an internal node is a node with at least one child node
int bstCountInternal(struct node *t) {
    if (t == NULL) return 0;
    if (t->left == NULL && t->right == NULL) return 0;

    return 1 + bstCountInternal(t->left) + bstCountInternal(t->right);
}

// returns the height of the bst
int max(int a, int b) {
    return (a < b) ? b : a;
}
int bstHeight(struct node *t) {
    if (t == NULL) return -1;

    return 1 + max(bstHeight(t->left), bstHeight(t->right));
}

// returns the level of the node containing a given key if such a node exists,
// otherwise the function returns -1
// (when a given key is not in the binary search tree)
// The level of the root node is zero.
int bstNodeLevel(struct node *t, int key) {
    if (t == NULL) return -1;
    if (t->elem == key) return 0;

    if (t->elem < key) {
        int left = bstNodeLevel(t->left, key);
        if (left == -1) return -1;
        return 1 + left;
    } else {
        int right = bstNodeLevel(t->right, key);
        if (right == -1) return -1;
        return 1 + right;
    }
}

int bstNodeLevel(struct node *t, int key) {
    int level = 0;

    while (t != NULL) {
        if (t->elem == key) return level;

        if (t->elem < key) {
            t = t->left;
        } else {
            t = t->right;
        }

        level += 1;
    }

    return -1;
}

// counts the number of values that are greater than a given value.
// This function should avoid visiting nodes that it doesn't have to visit
int bstCountGreater(struct node *t, int val) {
    if (t == NULL) return 0;

    int left = 0;
    if (val < t->elem) {
        left = bstCountGreater(t->left, val);
    }
    int right = bstCountGreater(t->right, val);

    if (t->elem > val) {
        return 1 + left + right;
    } else {
        return left + right;
    }
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
    if (t == NULL) return -1;

    int left = isHeightBalanced(t->left);
    int right = isHeightBalanced(t->right);

    if (left == NOT_HEIGHT_BALANCED || right == NOT_HEIGHT_BALANCED) {
        return NOT_HEIGHT_BALANCED;
    } else if (abs(left - right) > 1) {
        return NOT_HEIGHT_BALANCED;
    }

    return 1 + max(left, right);
}

// challenging question!

// return the kth smallest node in the binary search tree
// return -1 if no such node exists (e.g. the 5th smallest number
// if a tree with only 3 nodes)
void doKthSmallest(struct node *t, int k, int *curr, int *res) {
    if (t == NULL) return;

    doKthSmallest(t->left, k, curr, res);

    (*curr)++;
    if (*curr == k) {
        *res = t->elem;
        return;
    }

    doKthSmallest(t->right, k, curr, res);
}
int kthSmallest(struct node *t, int k) {
    int curr = 0;  // keep track of which node im up to
    int res = -1;  // keep track of the answer

    doKthSmallest(t, k, &curr, &res);

    return res;
}
