#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a[5];
    printf("memory addresses of int array a\n");
    printf(" a    = %p\n", a);
    printf("&a[0] = %p\n", &a[0]);
    printf("&a[1] = %p\n", &a[1]);
    printf("&a[4] = %p\n", &a[4]);
    printf("&4[a] = %p\n", &4 [a]);

    printf("\n");

    char b[5];
    printf("memory addresses of char array b\n");
    printf(" b    = %p\n", b);
    printf("&b[0] = %p\n", &b[0]);
    printf("&b[1] = %p\n", &b[1]);
    printf("&b[4] = %p\n", &b[4]);
}
