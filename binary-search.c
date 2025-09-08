#include <stdio.h>

int binarySearch(int arr[], int size, int target){
    int low = 0;
    int high = size - 1;

    int mid;

    while (low <= high)
    {
        mid = (low + high) /2;
        if (arr[mid] == target) {
                return mid;
        }
        else if (target < arr[mid]) {
                high = mid - 1;
        }
        else {
                low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    int target;
    printf("Enter the number to be searched: ");
    scanf("%d", &target);
    int searchIndex = binarySearch(arr, size, target);
    
    if (searchIndex == -1){
        printf("The element was not in the arr.\n");
    }
    else {
        printf("The element was found at the index %d\n", searchIndex);
    }

    return 0;
}