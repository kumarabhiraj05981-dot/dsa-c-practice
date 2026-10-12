#include <stdio.h>
int main() {
    int arr[6] = {10,20,30,40,50};
    int n = 5;
    int pos = 3;
    int value = 35;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }
    return 0;
}