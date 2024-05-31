#include <stdio.h>

struct a {};

int main(void) {
    // sizeof(empty struct)
    printf("%lu\n", sizeof(struct a));
}
