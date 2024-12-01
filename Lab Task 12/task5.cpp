#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insrt(int **array, int *size, int *max, int value, int pos) {
    if (pos < 1 || pos > *size + 1) {
        printf("Invalid position for insertion: %d\n", pos);
        return;
    }
    
    if (*size == *max) {
        *max *= 2;
        *array = (int *)realloc(*array, *max * sizeof(int));
        if (*array == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }

    for (int i = *size; i >= pos; i--) {
        (*array)[i] = (*array)[i - 1];
    }

    (*array)[pos - 1] = value;
    (*size)++;
}

void delet(int *array, int *size, int pos) {
    if (pos < 1 || pos > *size) {
        printf("Invalid position for deletion: %d\n", pos);
        return;
    }

    for (int i = pos - 1; i < *size - 1; i++) {
        array[i] = array[i + 1];
    }
    (*size)--;
}

int main() {
    int tests;
    if (scanf("%d", &tests) != 1) {
        printf("Error reading number of test cases.\n");
        return 1;
    }

    while (tests--) {
        int n;
        if (scanf("%d", &n) != 1) {
            printf("Error reading size of array.\n");
            return 1;
        }

        int max = n + 10;
        int *arr = (int *)malloc(max * sizeof(int));
        if (arr == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        int size = n;

        for (int i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("Error reading array elements.\n");
                return 1;
            }
        }

        printf("Initial Array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        char op[3];

        while (1) {
            if (scanf("%s", op) != 1) {
                printf("Error reading operation.\n");
                break;
            }

            if (strcmp(op, "END") == 0) {
                printf("Ending operation loop.\n");
                break;
            }

            if (strcmp(op, "I") == 0) {
                int val, pos;
                if (scanf("%d %d", &val, &pos) != 2) {
                    printf("Error reading insertion values.\n");
                    return 1;
                }
                insrt(&arr, &size, &max, val, pos);
            }
            else if (strcmp(op, "D") == 0) {
                int pos;
                if (scanf("%d", &pos) != 1) {
                    printf("Error reading deletion position.\n");
                    return 1;
                }
                delet(arr, &size, pos);
            }
            else {
                printf("Invalid operation: %s\n", op);
            }
        }

        printf("Operation loop ended, printing final array:\n");

        printf("Final Array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        free(arr);
    }

    return 0;
}
