#include <stdio.h>

// Function Declaration
float calculateAverage(float score1, float score2, float score3);

int main(void) {
    float s1, s2, s3, avg;

    printf("Enter first score: ");
    scanf("%f", &s1);
    printf("Enter second score: ");
    scanf("%f", &s2);
    printf("Enter third score: ");
    scanf("%f", &s3);

    avg = calculateAverage(s1, s2, s3);

    printf("Average Score = %.2f\n", avg);

    return 0;
}

// Function Definition
float calculateAverage(float score1, float score2, float score3) {
    return (score1 + score2 + score3) / 3.0f;
}