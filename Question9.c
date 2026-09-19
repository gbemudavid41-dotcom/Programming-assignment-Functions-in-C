#include <stdio.h>

// Function Declaration
int findLargest(int a, int b, int c);

int main(void) {
    int n1, n2, n3, largest;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);

    largest = findLargest(n1, n2, n3);

    printf("Largest Number = %d\n", largest);

    return 0;
}

// Function Definition
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}