//simple gpa calculator
#include <stdio.h>
#include <stdlib.h>
main () {
   //start with asking the name of courses
   char course1[20], course2[20], course3[20];
    printf("Enter the name of course 1:");
    scanf("%s", course1);
    printf("Enter the name of course 2:");
    scanf("%s", course2);
    printf("Enter the name of course 3:");
    scanf("%s", course3);
    //then ask the gpa of each course from 0.0 to 4.0
    float gpa1, gpa2, gpa3;
    printf("Enter the GPA for %s (0.0 - 4.0):");
    scanf("%f", &gpa1);
    printf("Enter the GPA for %s (0.0 - 4.0):");
    scanf("%f", &gpa2);
    printf("Enter the GPA for %s (0.0 - 4.0):");
    scanf("%f", &gpa3);
    //calculate the average gpa
    float average_gpa = (gpa1 + gpa2 + gpa3) / 3;
    //display the average gpa
    printf("The average GPA for %s, %s, and %s is: %.2f\n", course1, course2, course3, average_gpa);
    //add an invalid for numbers like negative or exceeding 4.0
    if (gpa1 < 0.0 || gpa1 > 4.0 || gpa2 < 0.0 || gpa2 > 4.0 || gpa3 < 0.0 || gpa3 > 4.0) {
        printf("Invalid GPA entered. Please enter a value between 0.0 and 4.0.\n");
    }
    //done 
    return 0;
}