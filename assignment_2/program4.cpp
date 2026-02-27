#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);


    if (marks > 75) {
        printf("Result: Distinction");
    }
    else if (marks > 65) {
        printf("Result: First Class");
    }
    else if (marks > 55) {
        printf("Result: Second Class");
    }
    else if (marks >= 40) {
        printf("Result: Pass Class");
    }
    else {
        printf("Result: Fail");
    }

    return 0;
}
