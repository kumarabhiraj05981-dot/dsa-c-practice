#include <stdio.h>
int main() {
    int arr[8] = {7, 14, 21, 28, 35, 42, 49};
    int n = 7;
    int pos = 5;

    for (int i = pos; i < n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--;

    for(int i =0; i < n; i++) {
        printf(" %d",arr[i]);
    }
    return 0;
}
