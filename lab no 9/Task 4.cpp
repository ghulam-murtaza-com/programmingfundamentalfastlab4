#include <stdio.h>
#include <string.h>

int main() {
    int m=5,n=50;
char students[m][n] = {
        "Murtaza",
        "Hassan",
        "Rehman",
        "Damn",
        "farooq"
    };

    char name[m];
    int found = 0;

    printf("Enter a student name to search: ");
    fgets(name, sizeof(name), stdin);
   
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < m; i++) {
        if (strcmp(students[i], name) == 0) {
            found = 1;
            break;
        }
    }
/*

    if (found) {
        printf("Found\n");
    } else {
        printf("Not Found
*/

    if (found) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}
