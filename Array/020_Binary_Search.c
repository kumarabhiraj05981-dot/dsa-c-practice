#include <stdio.h>
int main() {
    int arr[9] = {5, 10, 15, 20, 25, 30, 35, 40, 45};
    int n = 9;
    int key = 35;
    int low = 0; 
    int high = n-1;
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            found = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    if (found != -1) {
        printf("Element found at index %d",found);
    }else {
        printf("Element Not Found");
    }
    return 0;
}