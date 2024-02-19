//program to calculate grades
#include <stdio.h>

int main() {
    int subject1, subject2, subject3;
    float average;

    printf("Enter marks for subject 1: ");
    scanf("%d", &subject1);
    printf("Enter marks for subject 2: ");
    scanf("%d", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%d", &subject3);

    average = (subject1 + subject2 + subject3) / 3.0;

    if (average >= 70 && average <= 100) {
        printf("Grade: A\n");
    } else if (average >= 60 && average <= 69) {
        printf("Grade: B\n");
    } else if (average >= 50 && average <= 59) {
        printf("Grade: C\n");
    } else if (average >= 40 && average <= 49) {
        printf("Grade: D\n");
    } else if (average >= 30 && average <= 39) {
        printf("Grade: E\n");
    } else {
        printf("Grade: Fail\n");
    }

    return 0;
}