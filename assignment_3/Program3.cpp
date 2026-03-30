#include<stdio.h>
int main()
{
    int start = 1, end = 5;
    int i, sum = 0;

    for(i = start; i <= end; i++)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}