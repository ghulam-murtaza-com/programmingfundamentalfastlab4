#include <stdio.h>
#include <string.h>

#define MAX 100

struct Car {
    char mk[20];
    char mdl[20];
    int yr;
    float prc;
    float mlg;
} crs[MAX];

int cnt = 0;

void add() {
    if (cnt < MAX) {
        printf("Make: "); scanf("%s", crs[cnt].mk);
        printf("Model: "); scanf("%s", crs[cnt].mdl);
        printf("Year: "); scanf("%d", &crs[cnt].yr);
        printf("Price: "); scanf("%f", &crs[cnt].prc);
        printf("Mileage: "); scanf("%f", &crs[cnt].mlg);
        cnt++;
    } else printf("Limit reached.\n");
}

void disp() {
    for (int i = 0; i < cnt; i++)
        printf("\n%s %s %d $%.2f %.2f miles\n", crs[i].mk, crs[i].mdl, crs[i].yr, crs[i].prc, crs[i].mlg);
}

void srch() {
    char srh[20];
    printf("Search make/model: "); scanf("%s", srh);
    for (int i = 0; i < cnt; i++) 
        if (strstr(crs[i].mk, srh) || strstr(crs[i].mdl, srh))
            printf("\n%s %s %d $%.2f %.2f miles\n", crs[i].mk, crs[i].mdl, crs[i].yr, crs[i].prc, crs[i].mlg);
}

int main() {
    int ch;
    while (1) {
        printf("\n1. Add 2. Show 3. Search 4. Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: add(); break;
            case 2: disp(); break;
            case 3: srch(); break;
            case 4: return 0;
            default: printf("Invalid.\n");
        }
    }
}
