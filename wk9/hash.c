#include <stdio.h>

int hash(char *key, int N) {
    int h = 0;
    char *c;
    for (c = key; *c != '\0'; c++) {
        h = h + *c;
    }
    return h % N;
}

int main(void) {
    int hashTableSize = 8;

    printf("'COMP2521' hashes to become: %d\n",
           hash("COMP2521", hashTableSize));

    printf("'act' hashes to become: %d\n", hash("act", hashTableSize));

    printf("'cat' hashes to become: %d\n", hash("cat", hashTableSize));
}
