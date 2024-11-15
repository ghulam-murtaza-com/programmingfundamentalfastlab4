#include <stdio.h>

int main() {
    int bolts, nuts,washers;
int totalCost;
    int error=0;
    printf("Enter the number of bolts: ");
    scanf("%d",&bolts);

    printf("Enter the number of nuts: ");
    scanf("%d", &nuts);
//  if (washers< 2 bolts) {
//        printf("Check the Order: too few washers\n");
//        error = 1;
//    }
//    
//    if (!error) {
//        printf("Order is OK.\n");
//    }
    printf("Enter the number of washers: ");
    scanf("%d", &washers);

    totalCost=(bolts *5)+ (nuts* 3)+ (washers * 1);

    // order check krny ky liye
    if (nuts < bolts) {
        printf("Check the Order: too few nuts\n");
        error = 1;
    }
    if (washers <2*bolts) {
        printf("Check the Order: too few washers\n");
        error = 1;
    }
   
    if (!error) {
        printf("\nOrder is OK.\n");
    }

 
    printf("Total cost:%d\n", totalCost);

    return 0;
}
