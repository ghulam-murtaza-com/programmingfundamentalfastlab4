#include <stdio.h>
#include <string.h>

struct Pkg {
    char name[30];
    char destination[30];
    int duration;
    float cost;
    int seats;
} packages[50];

int packageCount = 0;

void addPackage() {
    if (packageCount < 50) {
        printf("Enter Package Name: ");
        scanf("%s", packages[packageCount].name);
        printf("Enter Destination: ");
        scanf("%s", packages[packageCount].destination);
        printf("Enter Duration (in days): ");
        scanf("%d", &packages[packageCount].duration);
        printf("Enter Cost: ");
        scanf("%f", &packages[packageCount].cost);
        printf("Enter Available Seats: ");
        scanf("%d", &packages[packageCount].seats);
        packageCount++;
        printf("Package added successfully.\n");
    } else {
        printf("Cannot add more packages. Limit reached.\n");
    }
}

void displayPackages() {
    if (packageCount == 0) {
        printf("No packages available.\n");
        return;
    }
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < packageCount; i++) {
        if (packages[i].seats > 0) {
            printf("Package: %s, Destination: %s, Duration: %d days, Cost: $%.2f, Seats Available: %d\n",
                   packages[i].name, packages[i].destination, packages[i].duration, packages[i].cost, packages[i].seats);
        }
    }
}

void bookPackage() {
    char searchName[30];
    printf("Enter the package name to book: ");
    scanf("%s", searchName);

    for (int i = 0; i < packageCount; i++) {
        if (strcmp(packages[i].name, searchName) == 0) {
            if (packages[i].seats > 0) {
                packages[i].seats--;
                printf("Package booked successfully. Remaining seats: %d\n", packages[i].seats);
                return;
            } else {
                printf("No seats available for this package.\n");
                return;
            }
        }
    }
    printf("Package not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Add Package\n");
        printf("2. Display Packages\n");
        printf("3. Book Package\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPackage();
                break;
            case 2:
                displayPackages();
                break;
            case 3:
                bookPackage();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
