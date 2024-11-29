#include <stdio.h>
#include <string.h>

#define MAX_DEPTS 10
#define MAX_COURSES 20

struct Course {
    char courseID[10];
    char courseName[50];
    char instructor[50];
    int credits;
};

struct Department {
    char deptName[50];
    struct Course courses[MAX_COURSES];
    int courseCount;
};

struct Department departments[MAX_DEPTS];
int deptCount = 0;

void adddepart() {
    if (deptCount >= MAX_DEPTS) {
        printf("Maximum number of departments reached!\n");
        return;
    }
    printf("Enter department name: ");
    // Ensure the input is properly handled
    scanf(" %[^\n]", departments[deptCount].deptName);
    departments[deptCount].courseCount = 0;
    deptCount++;
    printf("Department added successfully.\n");
}

void addcourse() {
    if (deptCount == 0) {
        printf("No departments available. Please add a department first.\n");
        return;
    }

    printf("Available Departments:\n");
    for (int i = 0; i < deptCount; i++) {
        printf("%d. %s\n", i + 1, departments[i].deptName);
    }

    int deptChoice;
    printf("Select a department by number: ");
    scanf("%d", &deptChoice);
    if (deptChoice < 1 || deptChoice > deptCount) {
        printf("Invalid department selection!\n");
        return;
    }
    struct Department *dept = &departments[deptChoice - 1];

    if (dept->courseCount >= MAX_COURSES) {
        printf("Maximum number of courses reached for this department!\n");
        return;
    }

    struct Course *course = &dept->courses[dept->courseCount];
    printf("Enter course ID: ");
    scanf(" %[^\n]", course->courseID);
    printf("Enter course name: ");
    scanf(" %[^\n]", course->courseName);
    printf("Enter instructor name: ");
    scanf(" %[^\n]", course->instructor);
    printf("Enter course credits: ");
    scanf("%d", &course->credits);

    dept->courseCount++;
    printf("Course added successfully.\n");
}

void showallandcourses() {
    if (deptCount == 0) {
        printf("No departments available.\n");
        return;
    }

    for (int i = 0; i < deptCount; i++) {
        struct Department *dept = &departments[i];
        printf("\nDepartment: %s\n", dept->deptName);
        printf("Courses:\n");
        if (dept->courseCount == 0) {
            printf("  No courses available in this department.\n");
        } else {
            for (int j = 0; j < dept->courseCount; j++) {
                struct Course *course = &dept->courses[j];
                printf("  Course ID: %s, Name: %s, Instructor: %s, Credits: %d\n",
                       course->courseID, course->courseName, course->instructor, course->credits);
            }
        }
    }
}

void calcandprint() {
    if (deptCount == 0) {
        printf("No departments available.\n");
        return;
    }

    for (int i = 0; i < deptCount; i++) {
        struct Department *dept = &departments[i];
        int totalCredits = 0;
        for (int j = 0; j < dept->courseCount; j++) {
            totalCredits += dept->courses[j].credits;
        }
        printf("Total credits for department %s: %d\n", dept->deptName, totalCredits);
    }
}

int main() {
    int choice;
    do {
        printf("\nUniversity Course Enrollment System\n");
        printf("1. Add Department to Enrollment System\n");
        printf("2. Add Course to Department List\n");
        printf("3. Show All Departments and Courses\n");
        printf("4. Calculate and Print Total Credits\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                adddepart();
                break;
            case 2:
                addcourse();
                break;
            case 3:
                showallandcourses();
                break;
            case 4:
                calcandprint();
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
