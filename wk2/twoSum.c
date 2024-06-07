#include <stdbool.h>
#include <stdio.h>

// return whether there are two numbers in the array that sum to 'sum'
// n = size of the array
bool hasTwoSum(int *arr, int n, int sum) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                return true;
            }
        }
    }

    return false;
}
