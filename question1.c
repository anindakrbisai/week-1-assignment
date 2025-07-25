#include <stdio.h>

int main() {
    int arr[100];       // Declare an array of fixed size
    int n = 5;          // Current number of elements
    int i, element;

    // Initialize array
    for (i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // Element to insert
    element = 10;
    arr[n] = element;   // Insert at end
    n++;                // Increase the count

    // Print the updated array
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
