#include <stdio.h>

// Function Declaration
void checkEvenOdd(int number);

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Pass value to function
    checkEvenOdd(num);

    return 0;
}

// Function Definition
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}