#include <stdio.h>
int main() {
    int arr[7] = {5, 10, 15, 20, 25, 30};
    int n = 6;
    int pos = 0;

    for (int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    for (int i = 0; i < n; i++) {
        printf(" %d",arr[i]);
    }
    return 0;
}