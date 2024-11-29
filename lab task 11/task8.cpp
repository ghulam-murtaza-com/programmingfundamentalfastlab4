#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[100];
    char author[50];
    int qty;
    float price;
};

void addBook(FILE *f) {
    struct Book b;
    printf("Enter Book ID: ");
    scanf("%d", &b.id);
    getchar(); // Clear the newline character
    printf("Enter Book Title: ");
    fgets(b.title, 100, stdin);
    b.title[strcspn(b.title, "\n")] = '\0'; // Remove newline
    printf("Enter Author: ");
    fgets(b.author, 50, stdin);
    b.author[strcspn(b.author, "\n")] = '\0'; // Remove newline
    printf("Enter Quantity: ");
    scanf("%d", &b.qty);
    printf("Enter Price: ");
    scanf("%f", &b.price);
    
    fseek(f, 0, SEEK_END);
    fwrite(&b, sizeof(b), 1, f);
    printf("Book added successfully!\n");
}

void viewBooks(FILE *f) {
    struct Book b;
    fseek(f, 0, SEEK_SET);
    while (fread(&b, sizeof(b), 1, f)) {
        printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n\n", b.id, b.title, b.author, b.qty, b.price);
    }
}

void searchBook(FILE *f) {
    int choice;
    printf("Search by:\n1. ID\n2. Title\nEnter choice: ");
    scanf("%d", &choice);
    struct Book b;
    int found = 0;
    if (choice == 1) {
        int id;
        printf("Enter Book ID: ");
        scanf("%d", &id);
        fseek(f, 0, SEEK_SET);
        while (fread(&b, sizeof(b), 1, f)) {
            if (b.id == id) {
                printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n", b.id, b.title, b.author, b.qty, b.price);
                found = 1;
                break;
            }
        }
    } else if (choice == 2) {
        char title[100];
        getchar(); // Clear the newline character
        printf("Enter Book Title: ");
        fgets(title, 100, stdin);
        title[strcspn(title, "\n")] = '\0'; // Remove newline
        fseek(f, 0, SEEK_SET);
        while (fread(&b, sizeof(b), 1, f)) {
            if (strstr(b.title, title) != NULL) {
                printf("ID: %d\nTitle: %s\nAuthor: %s\nQuantity: %d\nPrice: %.2f\n", b.id, b.title, b.author, b.qty, b.price);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

void updateBook(FILE *f) {
    int id;
    printf("Enter Book ID to update: ");
    scanf("%d", &id);
    struct Book b;
    int found = 0;
    fseek(f, 0, SEEK_SET);
    while (fread(&b, sizeof(b), 1, f)) {
        if (b.id == id) {
            found = 1;
            printf("Enter new Quantity: ");
            scanf("%d", &b.qty);
            printf("Enter new Price: ");
            scanf("%f", &b.price);
            fseek(f, -sizeof(b), SEEK_CUR);
            fwrite(&b, sizeof(b), 1, f);
            printf("Book updated successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

void deleteBook(FILE *f) {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);
    FILE *tempFile = fopen("temp.txt", "wb");
    struct Book b;
    int found = 0;
    fseek(f, 0, SEEK_SET);
    while (fread(&b, sizeof(b), 1, f)) {
        if (b.id != id) {
            fwrite(&b, sizeof(b), 1, tempFile);
        } else {
            found = 1;
        }
    }
    fclose(f);
    fclose(tempFile);
    remove("books.txt");
    rename("temp.txt", "books.txt");
    if (found) {
        printf("Book deleted successfully.\n");
    } else {
        printf("Book not found.\n");
    }
}

void calculateInventory(FILE *f) {
    struct Book b;
    float totalValue = 0;
    fseek(f, 0, SEEK_SET);
    while (fread(&b, sizeof(b), 1, f)) {
        totalValue += b.qty * b.price;
    }
    printf("Total inventory value: %.2f\n", totalValue);
}

int main() {
    FILE *f = fopen("books.txt", "r+b");
    if (f == NULL) {
        f = fopen("books.txt", "w+b");
    }
    
    int choice;
    do {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Update Book\n");
        printf("5. Delete Book\n");
        printf("6. Calculate Total Inventory Value\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addBook(f); break;
            case 2: viewBooks(f); break;
            case 3: searchBook(f); break;
            case 4: updateBook(f); break;
            case 5: deleteBook(f); break;
            case 6: calculateInventory(f); break;
            case 7: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    fclose(f);
    return 0;
}
