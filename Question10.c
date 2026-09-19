#include <stdio.h>

// Function Declarations
float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
void displayGrade(float average);
void displayStatus(float average);

int main(void) {
    float c_prog, math, electronics;
    float total, average;

    printf("Enter C Programming score: ");
    scanf("%f", &c_prog);
    printf("Enter Mathematics score: ");
    scanf("%f", &math);
    printf("Enter Electronics score: ");
    scanf("%f", &electronics);

    // Calculations
    total = calculateTotal(c_prog, math, electronics);
    average = calculateAverage(total);

    // Display Summary
    printf("\n--- STUDENT RESULT ---\n");
    printf("C Programming: %.2f\n", c_prog);
    printf("Mathematics: %.2f\n", math);
    printf("Electronics: %.2f\n", electronics);
    printf("Total Score: %.2f\n", total);
    printf("Average Score: %.2f\n", average);
    
    displayGrade(average);
    displayStatus(average);

    return 0;
}

// Function to calculate total score
float calculateTotal(float a, float b, float c) {
    return a + b + c;
}

// Function to calculate average
float calculateAverage(float total) {
    return total / 3.0f;
}

// Function to determine and display grade
void displayGrade(float average) {
    if (average >= 80 && average <= 100) {
        printf("Grade: A\n");
    } else if (average >= 70) {
        printf("Grade: B\n");
    } else if (average >= 60) {
        printf("Grade: C\n");
    } else if (average >= 50) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
}

// Function to determine and display pass/fail status
void displayStatus(float average) {
    if (average >= 50) {
        printf("Status: PASS\n");
    } else {
        printf("Status: FAIL\n");
    }
}