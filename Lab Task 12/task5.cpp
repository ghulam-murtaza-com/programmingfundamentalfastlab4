#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insrt(int **array, int *size, int *max, int value, int pos) {
    // Check for invalid position
    if (pos < 1 || pos > *size + 1) {
        printf("Invalid position for insertion: %d\n", pos);
        return;
    }
    
    // Resize the array if full
    if (*size == *max) {
        *max *= 2;
        *array = (int *)realloc(*array, *max * sizeof(int));
        if (*array == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
    }

    // Shift elements to the right to make space for the new value
    for (int i = *size; i >= pos; i--) {
        (*array)[i] = (*array)[i - 1];
    }

    // Insert the value at the correct position
    (*array)[pos - 1] = value;
    (*size)++;
}

void delet(int *array, int *size, int pos) {
    // Check for invalid position
    if (pos < 1 || pos > *size) {
        printf("Invalid position for deletion: %d\n", pos);
        return;
    }

    // Shift elements to the left to remove the value
    for (int i = pos - 1; i < *size - 1; i++) {
        array[i] = array[i + 1];
    }
    (*size)--; // Decrease the size of the array
}

int main() {
    int tests;
    
    // Read the number of test cases
    if (scanf("%d", &tests) != 1) {
        printf("Error reading number of test cases.\n");
        return 1;
    }

    // Process each test case
    while (tests--) {
        int n;

        // Read the number of elements for the current test case
        if (scanf("%d", &n) != 1) {
            printf("Error reading size of array.\n");
            return 1;
        }

        int max = n + 10;  // Initial array size with extra space
        int *arr = (int *)malloc(max * sizeof(int));  // Allocate memory for the array
        if (arr == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
        int size = n;

        // Read the elements into the array
        for (int i = 0; i < n; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("Error reading array elements.\n");
                return 1;
            }
        }

        // Debug: Print the initial array to ensure it's read correctly
        printf("Initial Array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        char op[3];  // For reading operations (I, D, END)

        // Read operations until "END" is encountered
        while (1) {
            if (scanf("%s", op) != 1) {
                printf("Error reading operation.\n");
                break;
            }

            // Check if operation is "END"
            if (strcmp(op, "END") == 0) {
                printf("Ending operation loop.\n"); // Debugging message
                break;
            }

            // Insert operation
            if (strcmp(op, "I") == 0) {
                int val, pos;
                if (scanf("%d %d", &val, &pos) != 2) {
                    printf("Error reading insertion values.\n");
                    return 1;
                }
                insrt(&arr, &size, &max, val, pos);
            }
            // Delete operation
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

        // Debug: Confirm the loop ended
        printf("Operation loop ended, printing final array:\n");

        // Print the final array after all operations
        printf("Final Array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Free dynamically allocated memory
        free(arr);
    }

    return 0;
}
