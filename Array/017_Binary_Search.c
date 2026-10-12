#include <stdio.h>
int  main() {
    int arr[7] = {5, 10, 15, 20, 25, 30, 35};
    int n = 7;
    int key = 25;

    int low = 0;
    int high = n-1;
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            found = mid;
            break;
        }else if (arr[mid] < key) {
            low = mid + 1;
        }else {
            high = mid -1;
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