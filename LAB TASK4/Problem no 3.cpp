#include<stdio.h>

int main() {
    int costitem;
    float benefitsaved, dis, afterdis;

    printf("Enter cost of the items: ");
    scanf("%d", &costitem);

    if (costitem < 0) {
        printf("Invalid Input Negative Numbers\n");
    }
	else if (costitem <1500) {
    dis =0.07;
        benefitsaved = costitem * dis;
    }
	else if (costitem >= 1500 && costitem <= 3000) {
    dis= 0.12;
        benefitsaved = costitem * dis;
    }
	else if (costitem > 3000 && costitem <= 5000) {
    dis = 0.22;
        benefitsaved = costitem * dis;
    }
	else if (costitem > 5000) {
       dis = 0.30;
        benefitsaved = costitem * dis;
    }

    afterdis = costitem - benefitsaved;

    if (costitem >= 0) {
        printf("Original Amount is : %d\n",costitem);
        printf("The Amountsaved Due to Discount: %.2f\n",benefitsaved);
        printf("The Amount after applying discount: %.2f\n", afterdis);
    }

    return 0;
}

