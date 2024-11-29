#include <stdio.h>
#include <string.h>

struct Invoice {
    char partn[50];
    char descr[100];
    int quant;
    float price;
};

void initv(struct Invoice *invce, char *partn, char *descr, int quant, float price) {
    strcpy(invce->partn, partn);
    strcpy(invce->descr,descr);
    invce->quant= (quant > 0) ? quant :0;
    invce->price =(price> 0) ?price :0;
}

float calcv(struct Invoice *invce) {
    return invce->quant * invce->price;
}

int main() {
    struct Invoice invce;

    initv(&invce, "1011", "Wrench", 3, 50.0);

    printf("Part Number: %s\n", invce.partn);
    printf("Part Description: %s\n", invce.descr);
    printf("Quantity: %d\n", invce.quant);
    printf("Price per Item: %.2f\n", invce.price);

    float amnt = calcv(&invce);
    printf("Invoice Amount: %.2f\n", amnt);

    initv(&invce, "2022", "Pliers", 7, 15.0);
    printf("\nTesting with another component:\n");
    printf("Part Number: %s\n", invce.partn);
    printf("Part Description: %s\n", invce.descr);
    printf("Quantity: %d\n", invce.quant);
    printf("Price per Item: %.2f\n", invce.price);

    amnt = calcv(&invce);
    printf("Invoice Amount: %.2f\n", amnt);

    return 0;
}
