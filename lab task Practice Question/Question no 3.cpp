#include <stdio.h>
#include <string.h>
#define MAX 200

int bookcount = 0;
struct Book {
    char name[50];
    char writer[30];
    long id;
    int year;
    char avail;
};

void addBook();
void findBook();
void updateStatus();

struct Book lib[MAX];

int main() {
    int choice;
    while (1) {
        printf("\nLibrary System:\n"); printf("1. Add New Book\n");
        printf("2. Search Book\n");  printf("3. Update Availability\n");
        printf("4. Exit\n"); printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {case 1: addBook(); break;
            case 2:findBook();break;
            case 3:updateStatus();break;
            case 4:printf("Exiting.\n"); return 0;
            default:printf("Invalid choice.\n");}
			}
    return 0;
}

void addBook() {
    if (bookcount < MAX) {
        printf("Book title: ");fflush(stdin);scanf("%s", lib[bookcount].name);
        printf("Book author: ");fflush(stdin);scanf("%s", lib[bookcount].writer);
        printf("Book ID: ");scanf("%ld", &lib[bookcount].id);
        printf("Publication year: "); scanf("%d", &lib[bookcount].year); 
        lib[bookcount].avail = 'y';
        bookcount++;
        printf("Book added!\n");
    } else {
        printf("Library full.\n");
    }
}

void findBook() {
    char search[30];
    int found = 0;
    printf("Search by title or author: ");
    fflush(stdin);
    scanf(" %[^\n]", search);

    for (int i = 0; i < bookcount; i++) {
        if (strstr(lib[i].name, search) != NULL || strstr(lib[i].writer, search) != NULL) {
            printf("\nFound:\n");
            printf("Title: %s\n", lib[i].name);
            printf("Author: %s\n", lib[i].writer);
            printf("ID: %ld\n", lib[i].id);
            printf("Year: %d\n", lib[i].year);
            printf("Available: %s\n", lib[i].avail == 'y' ? "Yes" : "No");
            found = 1;
        }
    }
    
    if (!found) {
        printf("No match.\n");
    }
}

void updateStatus() {
    char search[50];
    int found = 0;
    
    printf("Book title to update: ");
    fflush(stdin);
    scanf(" %[^\n]", search);

    for (int i = 0; i < bookcount; i++) {
        if (strcmp(lib[i].name, search) == 0) {
 printf("Now available: %s\n", lib[i].avail == 'y' ? "Yes" : "No");
 printf("Enter 'y' for available, 'n' for checked out: ");
 scanf(" %c", &lib[i].avail);  printf("Updated.\n");
            found = 1;
            break;
        }
    }if (!found) {
        printf("Book not found.\n");
    }
}
