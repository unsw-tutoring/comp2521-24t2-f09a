#include <stdio.h>
#include <stdlib.h>

// Time Complexity:
int f1(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i % 3;
    }
    return sum;
}

// Time Complexity:
int f2(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + f2(n / 3);
}

// Time Complexity:
int f3(int n) {
    int count = 0;
    int sum = 0;
    while (count < (n / 2)) {
        sum += f2(count);
        count++;
    }
    return sum;
}

// Time Complexity:
void f4(int n) {
    int sum = f1(n) + f2(n);

    for (int i = 0; i < n; i++) {
        f2(i);
    }

    for (int i = 1; i < n; i *= 2) {
        f2(i);
    }

    for (int i = 0; i < n; i++) {
        f1(i);

        for (int j = 0; j < n; j++) {
            f2(j);
        }
    }

    for (int i = 0; i < n; i++) {
        f1(i);

        for (int j = 0; j < n; j *= 2) {
            f2(j);
        }
    }

    for (int i = 0; i < n; i++) {
        f1(i);

        for (int j = 0; j < n; j *= 2) {
            f3(j);
        }
    }
}
