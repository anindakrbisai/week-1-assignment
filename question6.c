#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;  // Not sorted
        }
    }
    return true;  // Sorted
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isSorted(arr, n)) {
        printf("The array is sorted in non-decreasing order.\n");
    } else {
        printf("The array is NOT sorted.\n");
    }

    return 0;
}
