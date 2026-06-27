#include <stdio.h>
#include <string.h>
// Q108) Write a program to Create marksheet generation system.
struct Student {
    int roll_no;
    char name[30];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student student;
    int i;

    printf("----MARKSHEET GENERATION SYSTEM----\n");

    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);

    printf("Enter Student Name: ");
    scanf(" %29[^\n]", student.name);

    student.total = 0;

    // Input marks of 5 subjects
    for (i = 0; i < 5; i++) {
        printf("Enter marks of Subject %d: ", i + 1);
        scanf("%d", &student.marks[i]);

        student.total += student.marks[i];
    }

    // Calculate percentage
    student.percentage = student.total / 5.0;

    // Determine grade
    if (student.percentage >= 90)
        student.grade = 'A';
    else if (student.percentage >= 75)
        student.grade = 'B';
    else if (student.percentage >= 60)
        student.grade = 'C';
    else if (student.percentage >= 40)
        student.grade = 'D';
    else
        student.grade = 'F';

    // Display marksheet
    printf("\n----------- MARKSHEET -----------\n");
    printf("Roll Number : %d\n", student.roll_no);
    printf("Student Name: %s\n", student.name);

    for (i = 0; i < 5; i++) {
        printf("Subject %d Marks: %d\n",
               i + 1,
               student.marks[i]);
    }

    printf("Total Marks : %d / 500\n", student.total);
    printf("Percentage  : %.2f%%\n", student.percentage);
    printf("Grade       : %c\n", student.grade);

    if (student.grade == 'F')
        printf("Result      : FAIL\n");
    else
        printf("Result      : PASS\n");

    return 0;
}