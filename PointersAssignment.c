//
//  main.c
//  Assignment#3
//
//  Created by Diba Makki
//             Kano Terao

// on 2023-11-02.
//

#include <stdio.h>
#include <string.h>


typedef struct {
    char fullname[100];
    char lastname[50];
    char name[50];
    int age;
    long int passportID;
} applicant;

// Function to input applicant information
void inputApplicantInfo(applicant *app) {
    printf("Please Enter your first name: ");
    scanf("%s", app->name);

    printf("Please Enter your last name: ");
    scanf("%s", app->lastname);

    // Combine first name and last name into fullname
    strcpy(app->fullname, app->name);
    strcat(app->fullname, " ");
    strcat(app->fullname, app->lastname);

    printf("Your full name is: %s\n", app->fullname);

    printf("Enter the passportID: ");
    scanf("%ld", &app->passportID);

    printf("Please Enter your age: ");
    scanf("%d", &app->age);
}

// Function to display applicant information
void displayApplicantInfo(const applicant *app) {
    printf("\nApplicant Information:\n");
    printf("Full Name: %s\n", app->fullname);
    printf("Passport ID: %ld\n", app->passportID);
    printf("Age: %d\n", app->age);
}

int main() {
    printf("\t\t\t<< Welcome to passport renewal application >>\n");
    applicant application[10];

    for (int i = 0; i < 10; i++) {
        inputApplicantInfo(&application[i]);

        if (application[i].age < 16) {
            printf("Sorry!! Age of the applicant should be greater than 16 years old\n\n");
        } else {
            printf("Congrats! You successfully submitted your information for\n"
                   "the first section of passport renewal\n\n");
        }
    }

    // Display all gathered information
    printf("Displaying all gathered information:\n");
    for (int i = 0; i < 10; i++) {
        displayApplicantInfo(&application[i]);
    }

    return 0;
}





