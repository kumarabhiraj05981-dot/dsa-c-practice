#include <stdio.h>
int main() {
    int arr[6] = {2, 4, 6, 8, 10};
    int n = 5;
    int pos = 1;
    int value = 3;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
} 