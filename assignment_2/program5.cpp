#include <stdio.h>

int main() {
    float price, discount = 0;
    char student;


    printf("Enter total price: ");
    scanf("%f", &price);

    printf("Are you a student? (y/n): ");
    scanf(" %c", &student);  


    if (student == 'y' || student == 'Y') {
        if (price > 500) {
            discount = price * 0.20; 
        } else {
            discount = price * 0.10;   
        }
    } else {
        if (price > 600) {
            discount = price * 0.15;   
        } else {
            discount = 0;            
        }
    }

    
    printf("Discount = %.2f\n", discount);
    printf("Final Amount = %.2f", price - discount);

    return 0;
}
