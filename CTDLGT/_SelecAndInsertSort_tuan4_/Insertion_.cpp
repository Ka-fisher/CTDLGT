#include <stdio.h>

void InKQ(int B, int A[], int n) {
    printf("B%i: A = { ", B);
    for (int i = 0; i < n - 1; i++) {
        printf("%i ,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void insertionSort(int A[], int n) {
    int B = 1;

    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && A[j - 1] > A[j]) {
            swap(&A[j], &A[j - 1]);
            j--;
        }

        InKQ(B++, A, n);
    }

    printf("B%i: Mảng sau khi sắp xếp:\n A = {",B);
    for (int i = 0; i < n - 1; i++) {
        printf("%i ,", A[i]);
    }
    printf("%i}\n", A[n - 1]);
}

int main() {
    int A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
    int n = sizeof(A) / 4;

    printf("Ban đầu: A ={");
    for (int i = 0; i < n; i++) {
        printf("%i ,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);

    insertionSort(A, n);

    return 0;
}