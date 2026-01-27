#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value : ");
	scanf("%d", &n);
	if (n%2==0){
		printf("The number is Even");
	}
	else{
		printf("The number is Old");
	}
	return 0;
}