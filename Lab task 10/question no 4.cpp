#include <stdio.h>
#include <string.h>

#define MAX 50

struct Pkg {
    char nm[30];
    char dst[30];
    int dur;
    float cst;
    int sts;
} pkgs[MAX];

int cnt = 0;

void add() {
    if (cnt < MAX) {
        printf("Name: "); scanf("%s", pkgs[cnt].nm);
        printf("Dest: "); scanf("%s", pkgs[cnt].dst);
        printf("Days: "); scanf("%d", &pkgs[cnt].dur);
        printf("Cost: "); scanf("%f", &pkgs[cnt].cst);
        printf("Seats: "); scanf("%d", &pkgs[cnt].sts);
        cnt++;
    } else printf("Limit reached.\n");
}

void disp() {
    for (int i = 0; i < cnt; i++)
        if (pkgs[i].sts > 0)
            printf("\n%s to %s %d days $%.2f, Seats: %d\n", pkgs[i].nm, pkgs[i].dst, pkgs[i].dur, pkgs[i].cst, pkgs[i].sts);
}

void book() {
    char srh[30];
    printf("Book by name: "); scanf("%s", srh);
    for (int i = 0; i < cnt; i++) {
        if (strcmp(pkgs[i].nm, srh) == 0 && pkgs[i].sts > 0) {
            pkgs[i].sts--;
            printf("Booked.\n");
            return;
        }
    }
    printf("Not found or full.\n");
}

int main() {
    int ch;
    while (1) {
        printf("\n1. Add 2. Show 3. Book 4. Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: add(); break;
            case 2: disp(); break;
            case 3: book(); break;
            case 4: return 0;
            default: printf("Invalid.\n");
        }
    }
}
