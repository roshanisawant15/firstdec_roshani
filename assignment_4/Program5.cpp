#include <stdio.h>

int main()
{
    int choice, num, i, count, temp, digit, reverse, sum;

    printf("MENU\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%d", &num);

    switch(choice)
    {
        case 1:
            if(num % 2 == 0)
                printf("%d is Even", num);
            else
                printf("%d is Odd", num);
            break;

        case 2:
            count = 0;

            for(i = 1; i <= num; i++)
            {
                if(num % i == 0)
                    count++;
            }

            if(count == 2)
                printf("%d is Prime", num);
            else
                printf("%d is Not Prime", num);
            break;

        case 3:
            temp = num;
            reverse = 0;

            while(temp != 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            if(num == reverse)
                printf("%d is Palindrome", num);
            else
                printf("%d is Not Palindrome", num);
            break;

        case 4:
            if(num > 0)
                printf("%d is Positive", num);
            else if(num < 0)
                printf("%d is Negative", num);
            else
                printf("Number is Zero");
            break;

        case 5:
            temp = num;
            reverse = 0;

            while(temp != 0)
            {
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp = temp / 10;
            }

            printf("Reverse = %d", reverse);
            break;

        case 6:
            temp = num;
            sum = 0;

            while(temp != 0)
            {
                digit = temp % 10;
                sum = sum + digit;
                temp = temp / 10;
            }

            printf("Sum of digits = %d", sum);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}