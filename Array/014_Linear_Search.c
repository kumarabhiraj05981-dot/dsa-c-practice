#include <stdio.h>

int main() {
    int arr[7] = {10, 20, 30, 20, 40, 20, 50};
    int n = 7;
    int key = 20;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            count++;
        }
    }

    if (count == 0) {
        printf("Element not found");
    } else {
        printf("Total occurrences = %d", count);
    }

    return 0;
}