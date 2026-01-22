#include<stdio.h>
int main()
{
	int minutes = 140, hours, rem_minutes;
	hours = minutes /60;
	rem_minutes = minutes %60;
	printf("hours = %d \nremaining minutes= %d", hours ,rem_minutes);
	return 0;
}