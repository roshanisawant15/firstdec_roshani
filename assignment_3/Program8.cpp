#include<stdio.h>
int main()
{
    int n = 145, temp, rem, sum = 0;
    int i, fact;

    temp = n;

    while(n > 0)
    {
        rem = n % 10;   // last digit
        fact = 1;

        // factorial of digit
        for(i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;   // remove last digit
    }

    if(sum == temp)
        printf("Strong");
    else
        printf("Not Strong");

    return 0;
}