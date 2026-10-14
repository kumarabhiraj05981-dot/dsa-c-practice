#include <stdio.h>
int main() {
    int arr[4] = {7, 4, 2, 5};
    int n = 4;
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
            } 
        }
    }
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf(" %d",arr[i]);
    }
    return 0;
}