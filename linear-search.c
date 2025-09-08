#include <stdio.h>

int linearSearch(int size, int arr[], int target){
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[10] = {0,1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int target = 4;

    int searchIndex = linearSearch(arr, size, target);
    printf("The element was found at index %d", searchIndex);
    return 0;
}