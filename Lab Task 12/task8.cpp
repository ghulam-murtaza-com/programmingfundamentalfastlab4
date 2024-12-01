#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    // Ask user for the total number of points
    printf("Enter the total number of points in the facility: ");
    scanf("%d", &n);

    // Dynamically allocate memory for profit array based on n
    int *profit = (int *)malloc(n * sizeof(int));
    
    // Check if memory allocation was successful
    if (profit == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }

    int sum = 0;
    // Loop to input fee for each point
    for (int i = 0; i < n; i++) {
        printf("Enter fee for point %d : $", i + 1);
        int rapid;
        scanf("%d", &rapid);
        
        // Validate input to ensure fee is not negative
        while (rapid < 0) {
            printf("Please enter a valid fee for Point %d : $", i + 1);
            scanf("%d", &rapid);
        }
        
        profit[i] = rapid; // Store the valid fee
        sum += profit[i];  // Add the fee to the total sum
    }

    // Output the total profit
    printf("Total Profit for the facility is: $%d\n", sum);

    // Free allocated memory
    free(profit);

    return 0;
}
