#include <stdio.h>
int main( ){
    int arr[6] = {8,16,24,32,40,48};
    int n = 6;
    int found = -1;
    int key;
    printf("check your key value: ");
    scanf(" %d",&key);
    

    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            found = i;
            break;
        }
    }
    if (found != -1) {
        printf("Element found at index %d",found);
    } else {
        printf("Not Found");
    }
    return 0;
}