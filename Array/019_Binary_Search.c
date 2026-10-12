#include <stdio.h>
int main() {
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = 8;
    int key = 45;

    int low = 0; 
    int high = n-1; 
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        }else if (arr[mid] < key) {
            low = mid +1;
        }else {
            high = mid -1;
        }
    }
    if (found != -1) {
        printf("Element found at index %d",found);
    }else {
        printf("Element Not Found");
    }
    return 0;
}