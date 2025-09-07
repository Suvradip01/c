#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students {
    char name[50];
    long long s_id;
    char dept[50];
    char sec[50];
    char address[100];
    unsigned long long mb;
} std;

void Student_details(std details) {
    printf("\n--- Student Details ---\n");
    printf("Name        : %s\n", details.name);
    printf("ID          : %lld\n", details.s_id);
    printf("Department  : %s\n", details.dept);
    printf("Section     : %s\n", details.sec);
    printf("Address     : %s\n", details.address);
    printf("Contact No. : %llu\n", details.mb);
    printf("------------------------\n");
}

int add_student(std students[], int count) {
    printf("\n--- Enter New Student Details ---\n");
    printf("Enter Name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter Student ID: ");
    scanf("%lld", &students[count].s_id);

    printf("Enter Department: ");
    scanf(" %[^\n]", students[count].dept);

    printf("Enter Section: ");
    scanf(" %[^\n]", students[count].sec);

    printf("Enter Address: ");
    scanf(" %[^\n]", students[count].address);

    printf("Enter Contact Number: ");
    scanf("%llu", &students[count].mb);

    printf("Student added successfully!\n");
    return count + 1; // Return updated student count
}

int main() {
    std students[100];
    int admin_attempts = 0;
    int student_count = 0;
    int choice, option;
    char username[50], password[50];

    printf("\t\t\t---------- Welcome to Student Management Portal of SMIT ----------\n\n");

    while (1) {
        printf("\n----- Options -----\n");
        printf("1 -> Admin Login\n");
        printf("2 -> Faculty Login\n");
        printf("3 -> Exit\n");
        printf("\nEnter option: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Check if login attempts exceed limit
            if (admin_attempts >= 3) {
                printf("Too many failed attempts! Login is now locked.\n");
                printf("Contact: admin.support@gmail.com\n");
                return 0;
            }

            printf("\n----- Admin Login -----\n");
            printf("Enter username: ");
            scanf("%49s", username); // Limited input size
            printf("Enter password: ");
            scanf("%49s", password); // Limited input size

            if (strcmp(username, "suvra") == 0 && strcmp(password, "123") == 0) {
                while (1) {
                    printf("\n--- Student Management System ---\n");
                    printf("1. View All Students\n");
                    printf("2. Add a New Student\n");
                    printf("3. Logout\n");
                    printf("Enter option: ");
                    scanf("%d", &option);

                    switch (option) {
                        case 1:
                            if (student_count == 0) {
                                printf("No students added yet.\n");
                            } else {
                                for (int i = 0; i < student_count; i++) {
                                    Student_details(students[i]);
                                }
                            }
                            break;
                        case 2:
                            student_count = add_student(students, student_count);
                            break;
                        case 3:
                            printf("Logging out...\n");
                            goto main_menu;
                        default:
                            printf("Invalid option! Please try again.\n");
                    }
                }
            } else {
                printf("Invalid credentials! Try again.\n");
                admin_attempts++; // Increase failed attempts
            }
        } else if (choice == 2) {
            printf("Faculty login is not available yet.\n");
        } else if (choice == 3) {
            printf("Exiting the program...\n");
            return 0;
        } else {
            printf("Invalid choice! Please try again.\n");
        }

    main_menu: // Label for returning to the main menu
        continue;
    }
}
