#include <stdio.h>

void bpass(int a[], int n, int i) {
    if (i == n - 1) return;
    if (a[i] > a[i + 1]) {
        int t = a[i];
        a[i] = a[i + 1];
        a[i + 1] = t;
    }
    bpass(a, n, i + 1);
}

void bsort(int a[], int n) {
    if (n == 1) return;
    bpass(a, n, 0);
    bsort(a, n - 1);
}

void pArr(int a[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main() {
    int n;
    printf("Size: ");
    scanf("%d", &n);

    int A[n];
    printf("Elements: ");
    for (int i = 0; i < n; i++) 
        scanf("%d", &A[i]);

    printf("Original: ");
    pArr(A, n);

    bsort(A, n);

    printf("Sorted: ");
    pArr(A, n);

    return 0;
}
