#include <stdio.h>

void maxNum(int* ptra, int* ptrb) {
    if (*ptra > *ptrb) {
        printf("%d is greater than %d\n", *ptra, *ptrb);
    }
    else if (*ptra < *ptrb) {
        printf("%d is less than %d\n", *ptra, *ptrb);
    } else {
        printf("%d is equal to %d\n", *ptra, *ptrb);
    }
}

int main(){
    int a;
    int b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    maxNum(&a, &b);
    return 0;
}
