#include<stdio.h>
int main() {
    float marks;
    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 90) {
        printf("Grade: A\n");
    } else if (marks >= 80) {
        printf("Grade: B\n");
    } else if (marks >= 70) {
        printf("Grade: C\n");
    } else {
        printf("Grade: D\n");
    }

    return 0;
}