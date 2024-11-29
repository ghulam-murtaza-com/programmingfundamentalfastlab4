#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxd 5
#define maxc 10
#define maxs 30

struct Student {
    int id;
    char name[50];
    int age;
};

struct Course {
    int courseId;
    char courseName[50];
    struct Student students[maxs];
    int studentCount;
};

struct Department {
    char deptName[50];
    struct Course courses[maxc];
    int courseCount;
};

struct University {
    struct Department departments[maxd];
    int deptCount;
};

void addDept(struct University *uni) {
    if (uni->deptCount >= maxd) {
        printf("Maximum departments reached.\n");
        return;
    }
    printf("Enter department name: ");
    scanf("%s", uni->departments[uni->deptCount].deptName);
    uni->departments[uni->deptCount].courseCount = 0;
    uni->deptCount++;
}

void addCourse(struct University *uni) {
    if (uni->deptCount == 0) {
        printf("No departments available.\n");
        return;
    }
    int deptIndex;
    printf("Select department to add course to (0-%d): ", uni->deptCount - 1);
    scanf("%d", &deptIndex);

    if (uni->departments[deptIndex].courseCount >= maxc) {
        printf("Maximum courses reached.\n");
        return;
    }
    struct Course *course = &uni->departments[deptIndex].courses[uni->departments[deptIndex].courseCount];
    printf("Enter course ID: ");
    scanf("%d", &course->courseId);
    printf("Enter course name: ");
    scanf("%s", course->courseName);
    course->studentCount = 0;
    uni->departments[deptIndex].courseCount++;
}

void addStudent(struct University *uni) {
    int deptIndex, courseIndex;
    printf("Enter department index: ");
    scanf("%d", &deptIndex);
    printf("Enter course index: ");
    scanf("%d", &courseIndex);

    if (uni->departments[deptIndex].courses[courseIndex].studentCount >= maxs) {
        printf("Maximum students reached in course.\n");
        return;
    }

    struct Student *student = &uni->departments[deptIndex].courses[courseIndex].students[uni->departments[deptIndex].courses[courseIndex].studentCount];
    printf("Enter student ID: ");
    scanf("%d", &student->id);
    printf("Enter student name: ");
    scanf("%s", student->name);
    printf("Enter student age: ");
    scanf("%d", &student->age);
    uni->departments[deptIndex].courses[courseIndex].studentCount++;
}

void viewUniversity(struct University *uni) {
    for (int i = 0; i < uni->deptCount; i++) {
        printf("\nDepartment: %s\n", uni->departments[i].deptName);
        for (int j = 0; j < uni->departments[i].courseCount; j++) {
            printf("Course ID: %d, Name: %s\n", uni->departments[i].courses[j].courseId, uni->departments[i].courses[j].courseName);
            for (int k = 0; k < uni->departments[i].courses[j].studentCount; k++) {
                printf("  Student ID: %d, Name: %s, Age: %d\n", uni->departments[i].courses[j].students[k].id, uni->departments[i].courses[j].students[k].name, uni->departments[i].courses[j].students[k].age);
            }
        }
    }
}

int main() {
    struct University uni;
    uni.deptCount = 0;
    int choice;
    do {
        printf("\nUniversity Management System\n");
        printf("1. Add Department\n");
        printf("2. Add Course\n");
        printf("3. Add Student\n");
        printf("4. View University Info\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: addDept(&uni); break;
            case 2: addCourse(&uni); break;
            case 3: addStudent(&uni); break;
            case 4: viewUniversity(&uni); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 5);
    return 0;
}
