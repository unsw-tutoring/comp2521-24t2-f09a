#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arrayLen = 0;
    scanf("%d", &arrayLen);  // try 1000000000 (a billion)

    // ! this line would produce a compiler warning (with the -Wvla flag)
    // ! because we do not know the size of the array at compile-time
    char arr[arrayLen];  // 1GB array

    printf("Successfully created an array of length %d\n", arrayLen);
    printf("Array address: %p\n", arr);

    return 0;
}

/*
int main(void) {
    unsigned long long arrayLen = 0;
    scanf("%llu", &arrayLen); // try 1000000000000000 (a quadrillion)

    char *arr = malloc(arrayLen * sizeof(char)); // 1PB array
    
    // TODO: check if malloc was successful

    printf("Successfully created an array of length %llu\n", arrayLen);
    printf("Array address: %p\n", arr);

    return 0;
}
*/
