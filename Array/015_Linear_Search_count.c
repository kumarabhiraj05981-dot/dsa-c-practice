#include <stdio.h>
int main() {
    int arr[8] = {5, 10, 5, 15, 20, 5, 25, 10};
    int n = 8;
    int key = 5;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n",i);
            count++;
        }
    }
    if (count == 0) {
        printf("Element nit found");
    }else{
        printf("Total occurrences = %d", count);
    }
    return 0;
}