#include <stdio.h>

int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key = 60;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Element found at index %d", found);
    }
    else {
        printf("Element not found");
    }

    return 0;
}