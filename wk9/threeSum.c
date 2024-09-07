#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "HashTable.h"

// given an array of integers and a target sum S,
// determine whether the array contains two integers that sum to sum
// aim for O(n) average/expected time complexity
bool twoSum(int arr[], int size, int sum) {
    HashTable ht = HashTableNew();

    for (int i = 0; i < size; i++) {  // n times
        int other = sum - arr[i];
        if (HashTableContains(ht, other)) {
            HashTableFree(ht);
            return true;
        }

        HashTableInsert(ht, arr[i], -1);
    }
    HashTableFree(ht);
    return false;
}

// given an array of integers and a target sum S,
// determine whether the array contains three integers that sum to S.
// aim for O(n^2) average/expected time complexity
bool threeSum(int arr[], int size, int sum) {
    // TODO
    return false;
}
