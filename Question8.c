#include <stdio.h>

// Function Declaration
void multiplicationTable(int number);

int main(void) {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    multiplicationTable(num);

    return 0;
}

// Function Definition using loop
void multiplicationTable(int number) {
    for (int i = 1; i <= 12; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}