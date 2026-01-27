#include <stdio.h>

int main() {
    float basic, da, ta, hra, total;

    
    printf("Enter basic salary: ");
    scanf("%f", &basic);

    if (basic <= 5000) 
	{
        da = basic * 10 / 100;   // 10%
        ta = basic * 20 / 100;   // 20%
        hra = basic * 25 / 100;  // 25%
    } 
	else
	 {
        da = basic * 15 / 100;   // 15%
        ta = basic * 25 / 100;   // 25%
        hra = basic * 30 / 100;  // 30%
    }

    total = basic + da + ta + hra;


    printf("DA = %.2f\n", da);
    printf("TA = %.2f\n", ta);
    printf("HRA = %.2f\n", hra);
    printf("Total Salary = %.2f\n", total);

    return 0;
}
