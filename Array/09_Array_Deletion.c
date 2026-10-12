#include <stdio.h>
int main() {
    int arr[7] = {12, 24, 36, 48, 60, 72};
    int n = 6;
    int pos = 3;
    for (int i = pos; i < n -1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        printf(" %d",arr[i]);
    }
    return 0;
}