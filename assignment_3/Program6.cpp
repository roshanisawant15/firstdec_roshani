#include<stdio.h>
int main()
{
    int n = 28;
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}