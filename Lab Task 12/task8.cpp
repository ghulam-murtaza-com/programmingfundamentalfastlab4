#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the total number of points in the facility: ");
    scanf("%d", &n);

    int *profit = (int *)malloc(n * sizeof(int));
    
    if (profit == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        printf("Enter fee for point %d : $", i + 1);
        int rapid;
        scanf("%d", &rapid);
        
        while (rapid < 0) {
            printf("Please enter a valid fee for Point %d : $", i + 1);
            scanf("%d", &rapid);
        }
        
        profit[i] = rapid;
        sum += profit[i];
    }

    printf("Total Profit for the facility is: $%d\n", sum);

    free(profit);

    return 0;
}
