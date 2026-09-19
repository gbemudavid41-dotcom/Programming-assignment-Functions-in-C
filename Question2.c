#include <stdio.h>

// Function Declaration
int add(int a, int b);

int main(void) {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call
    result = add(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}

// Function Definition
int add(int a, int b) {
    return a + b;
}