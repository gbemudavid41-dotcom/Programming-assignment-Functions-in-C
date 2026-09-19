#include <stdio.h>

// Function Declaration
void checkEligibility(int age);

int main(void) {
    int userAge;

    printf("Enter your age: ");
    scanf("%d", &userAge);

    checkEligibility(userAge);

    return 0;
}

// Function Definition
void checkEligibility(int age) {
    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else {
        printf("You are not eligible to vote.\n");
    }
}