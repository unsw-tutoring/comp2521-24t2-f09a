#include <stdio.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    if (numDisks == 0) return;
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);
    printf("Move disk from %s from %s\n", fromRod, toRod);
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}

int main(void) {
    printf("Solving the Towers of Hanoi problem with 5 disks...\n");
    solveHanoi(5, "A", "C", "B");
    return 0;
}
