#include <stdio.h>

int main() {
    int arr[] = {12, 35, 7, 64, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element is: %d\n", max);
    return 0;
}
