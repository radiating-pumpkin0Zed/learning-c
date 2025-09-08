#include <stdio.h>

//Traversal means visiting every element in an array

//size: in use
//capacity: total elements possible to put in 

void createArray(int n, int arr[]){
    for (int i =0; i < n; i++){
        printf("Enter the element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    createArray(n, arr);

    printf("You entered: \n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}