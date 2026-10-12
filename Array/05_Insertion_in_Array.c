#include <stdio.h>
int main() {
    int arr[7] = {5,10,15,20,25,30};
    int n = 6;
    int pos = 0;
    int value  = 2;

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++) {
        printf(" %d",arr[i]);
    }
    return 0;
}