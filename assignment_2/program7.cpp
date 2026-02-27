#include <stdio.h>

int main() {
    int age;


    printf("Enter age: ");
    scanf("%d", &age);

    
    if (age < 12) {
        printf("Category: Child");
    }
    else if (age >= 12 && age <= 19) {
        printf("Category: Teenager");
    }
    else if (age >= 20 && age <= 59) {
        printf("Category: Adult");
    }
    else {
        printf("Category: Senior");
    }

    return 0;
}
