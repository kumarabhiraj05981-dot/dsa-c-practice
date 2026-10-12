#include <stdio.h>
int main() {
    int arr[7] = {11, 22, 33, 44, 55, 66};
    int n = 6;
    int pos = 4;
    int value = 50; 

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