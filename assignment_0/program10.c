#include<stdio.h>
int main()
{
	int m1=94, m2=84, m3=45, m4=58, m5=60;
	int total;
	float percentage;
	total = m1 +m2+m3+m4+m5;
	percentage = (total/500.0)*100;
	printf("total marks = %d \n percentage = %.2f",total,percentage);
	return 0;
}