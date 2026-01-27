#include<stdio.h>
int main()
{
	int year;
	printf("Enter year : ");
	scanf("%d", &year);
	if(year%4 ==0)
	{
		printf("This is leap years");
	}
	else {
		printf("This is not leap years");
	}
	return 0;
}