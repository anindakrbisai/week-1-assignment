#include <stdio.h>

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[100] = {0};  // Assuming elements are in range 0-99

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Element frequencies:\n");
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d: %d\n", i, freq[i]);
        }
    }

    return 0;
}
