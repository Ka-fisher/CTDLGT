#include <stdio.h>

void InKQ(int B, int A[], int n) {
    printf("B%i: A = { ", B);
    for (int i = 0; i < n - 1; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);
}

void selectionSort(int A[], int n) {
    int B = 1;
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
        }

        int temp = A[min];
        A[min] = A[i];
        A[i] = temp;

        InKQ(B++, A, n);

    }
    printf("B%i: Mang sau khi sap xep:\n A = {", B);
    for (int i = 0; i < n - 1; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);
}

int main() {
    int A[] = { 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 89, 59 };
    int n = sizeof(A)/4;

    printf("Ban dau: A ={");
    for (int i = 0; i < n; i++) {
        printf(" %i,", A[i]);
    }
    printf(" %i}\n", A[n - 1]);

    selectionSort(A, n);

    return 0;
}