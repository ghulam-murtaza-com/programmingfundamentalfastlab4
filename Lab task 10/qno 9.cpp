#include <stdio.h>
#include <string.h>

struct Emp {
    int eID;
    char eName[50];
    char eDept[50];
    float eSal;
};

void inpDtls(struct Emp *e, int idx) {
    printf("\nEnter details for Employee %d\n", idx);
    printf("ID: ");
    scanf("%d", &e->eID);
    getchar();
    printf("Name: ");
    fgets(e->eName, sizeof(e->eName), stdin);
    e->eName[strcspn(e->eName, "\n")] = 0;
    printf("Department: ");
    fgets(e->eDept, sizeof(e->eDept), stdin);
    e->eDept[strcspn(e->eDept, "\n")] = 0;
    printf("Salary: ");
    scanf("%f", &e->eSal);
}

void dspAll(struct Emp emp[], int cnt) {
    printf("\nEmployee Details:\n");
    for (int i = 0; i < cnt; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].eID);
        printf("Name: %s\n", emp[i].eName);
        printf("Department: %s\n", emp[i].eDept);
        printf("Salary: %.2f\n", emp[i].eSal);
    }
}

int main() {
    int nEmp;
    printf("Number of employees: ");
    scanf("%d", &nEmp);
    if (nEmp <= 0 || nEmp > 100) {
        printf("Invalid number of employees.\n");
        return 1;
    }
    struct Emp empArr[nEmp];
    for (int i = 0; i < nEmp; i++) {
        inpDtls(&empArr[i], i + 1);
    }
    dspAll(empArr, nEmp);
    return 0;
}
