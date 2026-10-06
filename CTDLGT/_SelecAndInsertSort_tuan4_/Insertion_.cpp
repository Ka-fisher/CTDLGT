#include <stdio.h>
void InKQ(int B, int A[], int n) {
    printf("B%i: A = { ", B);
    for (int i = 0; i < n; i++) {
        printf("%i ,", A[i]);
    }
    printf(" }\n");
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void insertionSort(int A[], int n) {
    int B = 1;

    for (int i = 1; i < n; i++){
        int j = i;
        while (j > 0 && A[j-1] > A[j]) {
            swap(&A[j], &A[j-1]);
            j--;
        }
        
        InKQ(B++, A, n);
    }
    printf("B%i: Mảng đã được sắp xếp.\n", B);
}

int main() {
    int A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
    int n = sizeof(A) / 4;

    printf("Ban dau: A ={");
    for (int i = 0; i < n; i++) {
        printf("%i ,", A[i]);
    }
    printf("}\n");

    insertionSort(A, n);

    printf("Mang sau khi sap xep: A ={");
    for (int i = 0; i < n; i++) {
        printf("%i ,", A[i]);
    }
    printf("}\n");

    return 0;
}