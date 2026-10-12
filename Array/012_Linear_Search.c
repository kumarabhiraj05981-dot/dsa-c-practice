#include <stdio.h>
int main() {
    int arr[5] = {5, 15, 25, 35, 45};
    int n = 5;
    int key = 35;
    int found = -1;
    
    for (int i = 0; i < n; i++) {
        if (arr[i]  == key) {
            found = i;
            break;
        }
    }
    if (found != -1) {
        printf("Element found at index %d",found);
    } else{
        printf("Not found");
    }
    return 0;
}